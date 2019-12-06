#include<iostream>
#include<stdlib.h>
using namespace std;
int j=0;
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
Node* construct(int arr[],Node* root,int i,int n)
{
   if(i>n)
    return NULL;
   if(i<n)
   {
      Node* temp=new Node(arr[i]);
      root=temp;
     if((i*2+1)<n && arr[i*2+1]!=-1)
      root->next[0]=construct(arr,root->next[0],i*2+1,n);
     if((i*2+2)<n && arr[i*2+2]!=-1)
       root->next[1]=construct(arr,root->next[1],i*2+2,n);
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
void printlevel(Node* root,int level)
{
   if(root==NULL)
     return;
   if(level==1)
  {
     if(j==0)
     {
         cout<<root->data;
          j=1;
     }
    else
      cout<<" "<<root->data;

   }
   if(level>1)
   {
       printlevel(root->next[0],level-1);
       printlevel(root->next[1],level-1);
   }

}

void reverse(Node* root)
{
   int h=height(root);
   for(int i=h;i>=1;i--)
   {
      printlevel(root,i);
   }
}
int main(int argc,char* argv[])
{
   int n=argc-1;
   int i=0,k=0;
   int arr[n];
    for(int i=1;i<argc;i++)
    {
       arr[k++]=atoi(argv[i]);
    }
    Node* root=construct(arr,root,0,n);
    reverse(root);

}
