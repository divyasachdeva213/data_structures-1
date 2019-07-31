#include<iostream>
#include<string.h>
using namespace std;
void remove_duplicate(string str)
{
    int len=str.size();
   char *p=&str[0];
   int i,j;
   for(i=0;i<len;i++)
    {
      for(j=i+1;j<len;j++)
        {   
            if(p[i]==p[j])
              {
                p[j]=0;
              }
         }
     }
  cout<<"the sting after removing duplicates:"<<endl;
   for(i=0;i<len;i++)
     {
       if(p[i]!=0)
        {
           cout<<p[i];
        }
     }
}
int main()
{
  string str;
 cout<<"enter the string:";
  cin>>str;
 remove_duplicate(str);
}
