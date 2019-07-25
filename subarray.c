#include<stdio.h>
int main(void)
{
   int n;
  printf("enter the length of array:");
   scanf("%d",&n);
   int i,arr[n];
  printf("enter the array:");
   for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
     }
   int j,k;
  printf("the subarray are: \n");
   for(i=0;i<n;i++)
    {
       for(j=i;j<n;j++)
         {
           for(k=i;k<=j;k++)
              {
                  printf("%d ",arr[k]);
              }
           printf("\n");
         }
    }
}
