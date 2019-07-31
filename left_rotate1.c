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
   int d;
    scanf("%d",&d);
    int temp[d];
     for(i=0;i<d;i++)
      {
          temp[i]=arr[i];
      }
   for(i=0;i<n-d;i++)
    {
        arr[i]=arr[d+i];
    }
    int j=0;
   for(i=n-d;i<n;i++)
    {
         arr[i]=temp[j];
           j++;
    }
    for(i=0;i<n;i++)
     {
        printf("%d ",arr[i]);
     }
    
}
