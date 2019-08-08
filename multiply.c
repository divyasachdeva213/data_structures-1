#include<stdio.h>
void multiply(int m,int n,int a,int b,int arr1[m][n],int arr2[a][b])
{
    int i,j,k;
     int arr3[m][b],summ=0;
   for(i=0;i<m;i++)
    {
       for(j=0;j<b;j++)
        {
            summ=0;
             for(k=0;k<a;k++)
              {
                 summ+=arr1[i][k]*arr2[k][j];
             }
          arr3[i][j]=summ;
        }
  }

printf("the multiplication of matrix:\n");
  for(i=0;i<m;i++)
   {
      for(j=0;j<b;j++)
       {
         printf("%d ",arr3[i][j]);
       }
 printf("\n");
 }


}
int main()
{
   int m,n;
   printf("enter the row for 1st matrix:");
   scanf("%d",&m);
  printf("\nenter the col for ist matrix:");
   scanf("%d",&n);
   int i,j,arr1[m][n];
   printf("enter the matrix:\n");
  for(i=0;i<m;i++)
   {
     for(j=0;j<n;j++)
      {
        scanf("%d",&arr1[i][j]);
     }
  }
    
   int a,b;
   printf("enter the row for 2nd matrix:");
   scanf("%d",&a);
   printf("enter the col for 2nd matrix:");
  scanf("%d",&b);

   int arr2[a][b];
     printf("enter the matrix2:\n");
        for(i=0;i<a;i++)
         {
           for(j=0;j<b;j++)
             {
               scanf("%d",&arr2[i][j]);
             }
         }

if(n!=a)
   {
     printf("multiply not possible");
   }
   else
     {
         multiply(m,n,a,b,arr1,arr2);
      }
 }
     
