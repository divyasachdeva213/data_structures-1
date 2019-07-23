#include<stdio.h>
int main(void)
{
   int n;
  printf("enter length of array:");
   scanf("%d",&n);
   int i,arr[n];
  printf("enter the array:");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
    int first=0;
    int end=n-1;
   int mid;
    mid=(first+end)/2;
    int d,j,k;
   printf("enter the no. of rotations:");
    scanf("%d",&d);
    int last,start;
    for(j=0;j<d;j++)
     {
        last=arr[mid];
          for(i=mid;i>0;i--)
            {
                 arr[i]=arr[i-1];   
            }
       arr[0]=last;
     }   
    for(k=0;k<d;k++)
      {
           start=arr[mid+1];
        for(i=mid+1;i<n-1;i++)
           {
               arr[i]=arr[i+1];
           }
            arr[n-1]=start;
      }


   for(i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
}
