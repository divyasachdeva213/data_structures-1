#include<iostream>
#include<stdlib.h>
using namespace std;
int binary_search(int arr[],int low,int high,int key)
{
    if(low>high)
      return -1;
     int mid=low+(high-low)/2;
    if(arr[mid]==key)
      return mid;
     if(arr[mid]>key)
        return binary_search(arr,low,mid-1,key);
    return binary_search(arr,mid+1,high,key);
}

int main(int argc,char* argv[])
{
   int n;
  n=atoi(argv[1]);
   int arr[n],k=0;
   for(int i=2;i<argc-1;i++)
   {
       arr[k++]=atoi(argv[i]);
   }
   int key=atoi(argv[argc-1]);

  int index= binary_search(arr,0,n,key);
   cout<<index;
}
