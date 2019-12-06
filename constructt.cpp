#include<iostream>
#include<stdlib.h>
using namespace std;
class Node
{
  public:
   int data;
   Node* next[2];
   Node()
   {}
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
void print(Node* root)
{
   if(root==NULL)
    return;
  cout<<root->data<<" ";
   if(root->next[0]!=NULL)
    print(root->next[0]);
   if(root->next[1]!=NULL)
    print(root->next[1]);
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
   print(root);
}

