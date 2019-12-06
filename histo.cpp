#include<iostream>
#include<stdlib.h>
#include<stack>
using namespace std;
int maxarea(int hist[],int n)
{
   stack<int> s;
   int max_area=0;
   int tp;
    int area_with_top;
   int i=0;
   while(i<n)
   {
        if(s.empty() || hist[s.top()]<=hist[i])
               s.push(i++);
        else
        {
             tp=s.top();
              s.pop();
         
            area_with_top=hist[tp]*(s.empty()?i:i-s.top()-1);
          

           if(area_with_top>max_area)
            {
                max_area=area_with_top;
            }
        }
   }
    
    while(s.empty()==false)
    {
          tp=s.top();
          s.pop();
         area_with_top=hist[tp]*(s.empty()?i:i-s.top()-1);


             if(area_with_top>max_area)
              {
                    max_area=area_with_top;
              }
    }
   return max_area;
}


int main(int argc,char* argv[])
{
   int n;
   n=atoi(argv[1]);
   int arr[n],k=0;
   for(int i=2;i<argc;i++)
   {
       arr[k++]=atoi(argv[i]);
   }

cout<<maxarea(arr,n);
}
