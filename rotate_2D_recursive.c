#include<stdio.h>
#define Rotation 2
#define R 5
#define C 5

void rotate(int m,int n,int arr[R][C],int row,int col)
{
    int curr=0,prev=0;
   if(m>R|| n>C)
      return;
if(m+1==R|| n+1==C)
   return;

    prev=arr[m+1][n];
   int i,j;

    for(i=n;i<col;i++)
     {
         curr=arr[m][i];
         arr[m][i]=prev;
          prev=curr;
     }
  for(i=m+1;i<col;i++)
     {
         curr=arr[i][col-1];
        arr[i][col-1]=prev;
         prev=curr;
     }
  for(i=col-2;i>=n;i--)
   {
       curr=arr[col-1][i];
      arr[col-1][i]=prev;
       prev=curr;
   }
   for(i=col-2;i>=m+1;i--)
   {
        curr=arr[i][n];
     arr[i][n]=prev;
        prev=curr;
   }
    m++;
    n++;
    --row;
   --col;
rotate(m,n,arr,row,col);
}
int main()
{
   int i,j;
   int a[R][C]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int row=R;
   int col=C;
//   for(i=0;i<Rotation;i++)
     rotate(0,0,a,row,col);

   for(i=0;i<R;i++)
    {
       for(j=0;j<C;j++)
        {
          printf("%d",a[i][j]);
       }
    printf("\n");
   }
}
