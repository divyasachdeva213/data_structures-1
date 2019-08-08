#include<stdio.h>
void lower(int n,int arr[n][n])
{
    int i,j,c=0;
    for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
         {
           if(i<j && arr[i][j]==0)
             {
                c=1;
             }
        }
    }
  if(c==1)
    {
       for(i=0;i<n;i++)
          {
            for(j=0;j<n;j++)
             {
               if(i>j)
                {
                  printf("%d ",arr[i][j]);
                 }
              }
           }
    }
              
}
int main()
{
  int n;
   scanf("%d",&n);
    int i,j,arr[n][n];
    for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
        {
           scanf("%d",&arr[i][j]);
        }
     }
 lower(n,arr);
}
