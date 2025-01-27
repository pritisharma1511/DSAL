#include<iostream>
#include<string.h>
using namespace std;
struct node
{
   string label;
   int ch_count;
   struct node* b[10];
}*root;
class tree
{
public:
    tree()
    {
           root =NULL;
    }
public:
    void insert()
    {
        int tchapter,i,j,tsection;
        root=new node;
        cout<<"enter the book :";
        cin>>root->label;
        cout<<"enter the no of chapter :";
        cin>>tchapter;
        root->ch_count= tchapter;
        for(i=0;i<tchapter;i++)
        {
           root->b[i]=new node;
           cout<<"enter the chapter name :" ;
           cin>>root->b[i]->label;
           cout<<"enter the no of section :";
           cin>>root->b[i]->ch_count;
           tsection=root->b[i]->ch_count;
           for(j=0;j<root->b[i]->ch_count;j++)
           {
                root->b[i]->b[j]=new node;
                cout<<"enter the name of section :";
                cin>>root->b[i]->b[j]->label;
           }
         
       }
    }
 
    void display(node*rt)
   {    
     int i,j;
    if(rt!=NULL)
    {
     cout<<"Book Name : "<<rt->label;
     cout<<" chapter No : "<<rt->ch_count;
     cout<<" Chapter name : "<<endl;
     for(i=0;i<rt->ch_count;i++)
     {
       cout<<rt->b[i]->label<<endl;
     
     cout<<"section No :"<<rt->b[i]->ch_count;
     cout<<"section name : "<<endl;
     for(j=0;j<rt->b[i]->ch_count;j++)
     {
        cout<<rt->b[i]->b[j]->label<<endl;
     }
     }
    } 
}
};

int main()
{
    tree t1;
    t1.insert();
    t1.display(root);
    return 0;
 }
    
         
        

