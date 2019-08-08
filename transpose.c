#include<stdio.h>
void transpose(int n,int arr[n][n])
  {
     int i,j,a[n][n];
     for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
         {
           a[i][j]=arr[j][i];
         }
     }
  
  printf("the transpose of  matrix:\n");
      for(i=0;i<n;i++)
       {
         for(j=0;j<n;j++)
           {
              printf("%d ",a[i][j]);
            }
         printf("\n");
       }
  }
int main()
{
  int n;
  printf("enter the size of array:");
  scanf("%d",&n);
  int i,j,arr[n][n];
  printf("enter the matrix:\n");
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
        {
           scanf("%d",&arr[i][j]);
        }
    }
   transpose(n,arr);
}
