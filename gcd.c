#include<stdio.h>
int gcde(int arr[],int n)
{
    int i;
   int result=arr[0];
   for(i=0;i<n;i++)
   {
       result=gcd(arr[i],result);
   }
  return result;
}
int gcd(int a,int b)
{
   if(a==0)
     return b;
  return gcd(b%a,a);
}
int main(void)
{
   int n;
  printf("enter the size of array:");
  scanf("%d",&n);
  int arr[n],i;
  printf("Enter the elements:");
   for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
 int k=gcde(arr,n);
printf("%d",k);
}
