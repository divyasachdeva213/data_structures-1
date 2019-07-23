#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
     int d,left,j;
    scanf("%d",&d);
   for(j=0;j<d;j++)
    {
       left=arr[0];
       for(i=0;i<n-d+1;i++)
        {
            arr[i]=arr[i+1];
        }
       arr[i]=left;
      
    }
   for(i=0;i<n;i++)
     {
        printf("%d ",arr[i]);
     }
}
