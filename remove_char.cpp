#include<iostream>
#include<string.h>
using namespace std;
void remove_char(string str,string str2)
{
   int len=str.size();
  int l2=str2.size();
    char *p=&str[0];
   char *k=&str2[0];
   int i,j;
   for(i=0;i<len;i++)
    {
       for(j=0;j<l2;j++)
          {
            if(p[i]==k[j])
              {
                 p[i]=0;
              }
           }
   }
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
   string str,str2;
   cout<<"enter the string:";
   cin>>str;
   cout<<"enter 2nd string:";
   cin>>str2;
   remove_char(str,str2);
}
