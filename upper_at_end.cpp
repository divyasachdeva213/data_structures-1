#include<iostream>
#include<string.h>
using namespace std;
void upper_end(string str)
{
   int len=str.size();
   string str2="",str1="";
  char c;
   int i;
  
  for(i=0;i<len;i++)
  {  
      c=str[i];
     if(c>='A' && c<='Z')
     {
        str1=str1+c;
     }
    else
    {
       str2=str2+c;
    }
  }
   string strr=str2+str1;
  cout<<"the string is:"<<strr;
}
int main()
{
   string str;
  cout<<"enter the string:";
  cin>>str;
  upper_end(str);
}
