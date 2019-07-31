#include<stdio.h>
int main(void)
{
   int a=0,b=1;
   int n;
   printf("No. of elements u want to have:");
   scanf("%d",&n);
 printf("%d ",a);
 printf("%d ",b);
   fab(a,b,n-2);
}
int fab(int a,int b,int n)
{
    if(n==0)
      return 0;
   

  int c;
  c=a+b;
  
  a=b;
   b=c;
  printf("%d ",c);
 n--;
  fab(a,b,n);
}
