#include<stdio.h>
int main(void)
{
   int n;
   scanf("%d",&n);
   int i,arr[n];
   for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
   int j,k,max=0,sum=0;
   for(i=0;i<n;i++)
    {
             
       for(j=i;j<n;j++)
         {   sum=0;
            for(k=i;k<=j;k++)
              {
                 printf("%d",arr[k]);
                  sum+=arr[k];
              }
          printf("\n");
         
         if(sum>max)
         {
            max=sum;
         }
}
      
  }
  printf("the max sum is: %d",max);
}
