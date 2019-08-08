#include<stdio.h>
void rotateby90(int n,int arr[n][n])
{
   int i,j,res[n][n];
   for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
      {
        res[i][j]=arr[j][i];
     }
   }
  
   for(i=0;i<n;i++)
   {
      int start=0,end=n-1;
       while(start<end)
       {
          int temp=res[i][start];
         res[i][start]=res[i][end];
          res[i][end]=temp;
           start++;
          end--;
       }
   }
   printf("the array after rotating 90:\n");  
  
    for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
        {
           printf("%d ",res[i][j]);
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
  printf("enter the 2d array:\n");
    for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
        {
           scanf("%d",&arr[i][j]);
        }
    }


   rotateby90(n,arr);
}
