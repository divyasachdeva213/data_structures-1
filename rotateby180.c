#include<stdio.h>
void rotateby180(int r,int c,int arr[r][c])
{
   int i,j;
      printf("the rotation of array:\n"); 
    for(i=r-1;i>=0;i--)
     {
       for(j=c-1;j>=0;j--)
        {
          printf("%d ",arr[i][j]);
        }
         printf("\n");
     }
}
int main()
{
   int r,c;
 printf("enter the rows and cols:\n");      
  scanf("%d",&r);
  scanf("%d",&c);
   int i,j,arr[r][c];
     printf("enter the array:\n");
   for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
       {
           scanf("%d",&arr[i][j]);
       }
   }
   rotateby180(r,c,arr);   

  
   
}
