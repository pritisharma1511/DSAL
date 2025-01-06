#include<iostream>
#include<fstream>
using namespace std;
class student
{
	string name;
	int ID;
	char divi;
	public:
	void accpet()
	{
		
		cout<<"Enter Student Name : ";
		cin>>name;
		cout<<"Enter Student ID : ";
		cin>>ID;
		cout<<"Enter Division : ";
		cin>>divi;
	} 
	
	void display()
	{
		
		cout<<"Student Name : "<<name<<endl;
		cout<<"Student ID : "<<ID<<endl;
		cout<<"Division : "<<divi<<endl;
	}
};

int main()
{
	student s[5];
	fstream file;
	int i,n;
	file.open("abc.txt",ios::out);
	cout<<"Enter number of student : "<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter Student Information : "<<i+1<<endl;
		s[i].accpet();	
		file.write((char*)&s[i],sizeof s[i]);
	}
	
	file.open("abc.txt",ios::in);
	for(i=0;i<n;i++)
	{
		cout<<"Student Data :"<<i+1<<endl;
		s[i].display();	
		file.read((char*)&s[i],sizeof s[i]);
	}
	
	file.close();
	return 0;
}
	
	
	
