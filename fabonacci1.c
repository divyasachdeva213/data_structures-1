#include<stdio.h>
int main(void)
{
  int a=0;
  int b=1,c;
   int n;
   printf("No. of elements fabonacci have:");
   scanf("%d",&n);
  printf("%d ",a);
 printf("%d ",b);
  for(int i=0;i<n-2;i++)
  {
       c=a+b;
      a=b;
      b=c;
    printf("%d ",c);
  }
  
}
