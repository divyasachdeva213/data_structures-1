#include<stdio.h>
int reverse(int arr[],int start,int end)
{
    if(start<end)
    {
       int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
         end--;
    
   reverse(arr,start,end);
}
return 0;
}
int main(void)
{
   int n;
   scanf("%d",&n);
  int i,arr[n];
  for(i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
  int start=0;
   int end=n-1;
   reverse(arr,start,end);

 for(i=0;i<n;i++)
   {
      printf("%d ",arr[i]);
   }
return 0;
}
