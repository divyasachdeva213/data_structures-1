#include<stdio.h>
int main(void)
{
   int n;
   printf("enter size of array:");
   scanf("%d",&n);
   int i,arr[n];
  printf("enter the elements :");
  for(i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
  int d,sum,summ=0,first,j;
  printf("enter the no. of rotations:");
  scanf("%d",&d);
  printf("enter the sum:");
  scanf("%d",&sum);
  for(j=0;j<d;j++)
   {
      first=arr[0];
     for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
      arr[i]=first;
   }
   printf("array after rotation:\n");
   for(i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
  printf("\n");
    int p=1;
       for(i=0;i<n;i++)
      {
        summ=arr[i]+arr[i+1];
       if(summ==sum)
       {   
           p=0;
           printf("the pairs are: %d , %d",arr[i],arr[i+1]);
       }
      }
  if(p==1)
   printf("not found");
}
