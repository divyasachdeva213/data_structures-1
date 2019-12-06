#include<stdio.h>
int main(int argc,const char *argv[])
{
   int arr[4],index,p,i,n;
   int c,k=0;
   int count=argc-1;
   for(i=1;i<argc;i++)
      {
         arr[k]=atoi(argv[i]);
            k++;
       }
         scanf("%d",&n);
         for(i=0;i<=count;i++)
          {
                  if(arr[i]==n)
                    {
                       p=1;
                       index=i;
                    }
          }
            if(p==1)
                {
                     printf("the element is at: %d",index);
                }
             else
               {
                      printf("element not found");
                 }
return 0;
}
