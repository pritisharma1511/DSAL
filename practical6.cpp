/* Beginning with an empty binary search tree, Construct binary search tree by inserting the
values in the order given. After constructing a binary tree -
i. Insert new node
ii. Find number of nodes in longest path from root
iii. Minimum data value found in the tree
iv. Change a tree so that the roles of the left and right pointers are swapped at every
node
v. Search a value
*/

#include<iostream>
#include<string.h>

using namespace std;
struct node
{
     int data;
     node *left;
     node *right;

}*root;

class BST 
{
     public:
     BST()
     {
      root=NULL;
     }

    void create(int data)
    {
        if(root==NULL)
        {
           root=new node;
           root->data=data;
           root->left=NULL;
           root->right=NULL;
         }
         cout<<"Node created successfully";
     }
    void insert(node* p,int data)
   {
        node* temp=new node;
        temp->data=data;
        
        if (data >p->data)
        {
             if(p->right==NULL)
             { 
               p->right=temp;
             }
            else
           {
               while(p->right!=NULL)
              {
                 p=p->right;
              }
            }
              cout<<"data inserted at right";  
        }
       else
       {
                 if (p->left==NULL)
                {
                   p->left=temp;
                }
               else
               {
                   while(p->left!=NULL)
                   {
                       p=p->left;
                   
                  }
               }
               cout<<"node insert at left....";
       }
     }
};

int main()
{
BST b;
int ch,data;
     while(ch!=3)
    { 
       cout<<"\n *************************Binary Search Tree **********************";
      
       cout<<"\n 1.create tree \n 2.insert node \n 3.exit\n";
       cout<<"enter your choice ...\n";
       cin>>ch;
      if(ch==1)
      {
          cout<<"enter the node to be created";
          cin>>data;
          b.create(data);
      }
      else if(ch==2)
      {
          cout<<"\n enter the node to be inserted :";
          cin>>data;
          b.insert(root,data);
      }
      else
      {
        cout<<"exit";
      }
      
     }
 }        
   
 
