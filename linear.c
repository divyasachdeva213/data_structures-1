#include<stdio.h>
int main(int argc,char *argv[])
{
  int n,i;
  n=atoi(argv[1]);
  int arr[n],k=0;
  for(i=2;i<argc-1;i++)
   {
      arr[k]=atoi(argv[i]);
       k++;
   }
  int p=0,index;
   int search,count=argc-1;
  search=atoi(argv[argc-1]);
    for(i=0;i<count;i++)
    { 
        if(arr[i]==search)
          {
              p=1;
              index=i;
           } 
     }   
if(p==1)
  printf("element found at %d",index);

else
  printf("elment not found");

}
   

