#include<iostream>
#include<stdlib.h>
using namespace std;
class Node
{
   public:
    int data;
    Node* next[2];
   Node(int data)
   {
      this->data=data;
      next[0]=next[1]=NULL;
   }
};
Node* construct(Node* root,int arr[],int i,int n)
{
   if(i>n)
    return NULL;
   if(i<n)
   {
      Node* temp=new Node(arr[i]);
     if((i*2+1)<n && arr[i*2+1]!=-1)
       root->next[0]=construct(root->next[0],arr,i*2+1,n);
    if((i*2+2)<n && arr[i*2+2]!=-1)
      root->next[1]=construct(root->next[1],arr,i*2+2,n);
   }
  return root;
}
int height(Node* root)
{
   if(root==NULL)
     return 0;
   else
    {
       int l=height(root->next[0]);
      int r=height(root->next[1]);
      if(l>r)
        return l+1;
       else
         return r+1;
    }
}
void printlevel(Node* root,int level,int ltr)
{
    if(root==NULL)
      return;
   else
   {
        if(level==1)
           cout<<root->data<<" ";
       if(level>1)
         {
            if(ltr)
            {
               printlevel(root->next[0],level-1,ltr);
               printlevel(root->next[1],level-1,ltr);
            }
            else
             {
                printlevel(root->next[1],level-1,ltr);
                printlevel(root->next[0],level-1,ltr);
             }
         }
   }
}
void spiralorder(Node* root)
{
   int h=height(root);
   bool ltr=false;
   for(int i=1;i<=h;i++)
   {
      printlevel(root,i,ltr);
     
   
   ltr=!ltr;
}

}
int main(int argc,char* argv[])
{
   int arr[argc];
    int k=0;
   for(int i=1;i<argc;i++)
   {
     arr[k++]=atoi(argv[i]);
   }
  int n=k;
Node* root=construct(root,arr,0,n);
   spiralorder(root);
   
}
