#include<stdio.h>
int rotation_count(int arr[],int n)
{
   int min=arr[0],index=-1,i;
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
          {
             min=arr[i];
            index=i;
          }
    }
return index;
}
int main(int argc,char * argv[])
{
   int n;
  n=atoi(argv[1]);
   int i,arr[n],k=0;
   for(i=2;i<argc;i++)
   {
      arr[k]=atoi(argv[i]);
     k++;
   }
   int d,j,last;
  printf("enter the no. of rotations");
   scanf("%d",&d);
  for(j=0;j<d;j++)
   {
       last=arr[n-1];
     for(i=n-1;i>0;i--)
     {
         arr[i]=arr[i-1];
     }
     arr[0]=last;
      
   }
   int ans=rotation_count(arr,n);
   printf("the no. of rotation after which array become sorted: %d",ans );
   
}
 
