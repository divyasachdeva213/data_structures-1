#include<stdio.h>
int main(int argc,char *argv[])
{
   int n;
   n=atoi(argv[1]);
   int arr[n],i,k=0;

  for(i=2;i<argc-1;i++)
   {
      arr[k]=atoi(argv[i]);
      k++;
   }
   int d,j;
   d=atoi(argv[argc-1]);
  for(j=0;j<d;j++)
 {  int last=arr[n-1];
   for(i=n-1;i>0;i--)
     {   
        arr[i]=arr[i-1];
     }
     arr[0]=last;
    }
    for(i=0;i<n;i++)
     {
        printf("%d ",arr[i]);
     }
   
}
