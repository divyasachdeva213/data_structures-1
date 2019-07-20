#include<stdio.h>
int main(int argc,char *argv[])
{
   int arr[4],first,last,mid,search,n,k=0,i;
    first=0;
    last=argc-1;
     for(i=1;i<argc;i++)
         {   
            arr[k]=atoi(argv[i]);
              k++;
           }
     mid=(first+last)/2;
      printf("enter element to search:");
        scanf("%d",&search);
     
      while(first<=last)
        {
            if(arr[mid]==search)
              {
                 printf("the element found at: %d",mid);
                    break;
               }
             else if(arr[mid]<search)
                 first=mid-1;
              else
                 last=mid-1;

               mid=(first+last)/2;
          }
  if(first>last)
    printf("the element is not there in array");

return 0;


}
