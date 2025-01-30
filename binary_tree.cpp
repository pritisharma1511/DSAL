#include<iostream>
#include<string.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
}*root;
class bst
{
public:
  
      
      bst()
      {   
          root==NULL;
      }
       void create(int data)
       {   
           
           
         
            if (root==NULL)
            {
              root =new node;
              root->data=data;
              root->left=NULL;
              root->right=NULL;
              cout<<"root is"<<root->data;
             }
         }
         void insert(node*p,node*r,int data)
         {
            
            if(r==NULL)
            {
                  return create(data);
            }
            else
            {
              
              p=new node;
              p->data=data;
              p->left=NULL;
              p->right=NULL; 
           }
           if (p->data >r->data)
           {
               if(r->right=NULL)
               {
                  r->right=p;
                  cout<<"data inserted :"<<p->data;
               }
               else
               {
                   insert(p,r->right,data);
                    cout<<"data inserted :"<<p->data;
               }
           }
           else
           {
             if(r->left==NULL)
             {
               r->left=p;
             }
             else
             {
                 insert(p,r->left,data);
             }
           }
        }
  };
  int main()
  {
     bst b;
     node* a;
     b.create(4);
     b.insert(a,root,10);
     return 0;
  }
 


