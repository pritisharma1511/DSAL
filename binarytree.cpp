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
        temp->left=NULL;
        temp->right=NULL;
        
        if (data >p->data)
        {
             if(p->right==NULL)
             { 
               p->right=temp;
               cout<<"data inserted at right";  
             }
            else
           {
               insert(p->right,data);
            }
              
        }
       else
       {
                 if (p->left==NULL)
                {
                   p->left=temp;
                    cout<<"node insert at left....";
                }
               else
               {
                  insert(p->left,data);
               }
              
       }
     }
     void inorder(node *root)
     {
        if(root==NULL)
        {
           return;
        }
        inorder(root->left);
        cout<<root->data<<"\t";
        inorder(root->right);
    }
     void preorder(node *root)
     {
        if(root==NULL)
        {
           return;
        }
         cout<<root->data<<"\t";
         preorder(root->left);
         preorder(root->right);
    }
     void postorder(node *root)
     {
        if(root==NULL)
        {
           return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<"\t";
    }
    void find_min(node *root)
    {
       if(root==NULL)
       {
         return;
       }
       while(root->left!=NULL)
       {
         root=root->left;
       }
       cout<<root->data;
    }
    
    
};

int main()
{
BST b;
int ch,data;
     while(ch!=7)
    { 
       cout<<"\n *************************Binary Search Tree **********************";
      
       cout<<"\n 1.create tree \n 2.insert node \n 3.inorder \n 4. preorder \n5.postorder \n 6.find minimum node\n  7.exit";
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
      else if(ch==3)
      {
         b.inorder(root);
      }
      else if(ch==4)
      {
         b.preorder(root);
      }
      else if(ch==5)
      {
         b.postorder(root);
      }
      else if(ch==6)
      {
         b.find_min(root);
      }
      else
      {
        cout<<"exit";
        }
      
     }
 }        
   
 
