#include<stdio.h>
int swapdiagonal(int n,int arr[n][n])
{
    int i,j,temp;
    for(i=0;i<n;i++)
     {
         temp=arr[i][i];
        arr[i][i]=arr[i][n-i-1];
        arr[i][n-i-1]=temp;
     }
    
    printf("now the 2d array becomes:\n");
    for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
          {
              printf("%d ",arr[i][j]);
           }
       printf("\n");
    }
     
}
int main()
{
  int n;
   printf("enter the size of array:\n");
   scanf("%d",&n);
   int i,j,arr[n][n];
   for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
       {
         scanf("%d",&arr[i][j]);
       }
    }
   swapdiagonal(n,arr);
}
