#include<iostream>
#include<string.h>
using namespace std;
void reverse(string str)
{
    int len=str.size();
    char *p=&str[0];
    int i;
  cout<<"string after reversed: ";
   for(i=len-1;i>=0;i--)
   {
       cout<<p[i];
   }
   
}
int main()
{             
  string str;
  cout<<"enter the string:";
  cin>>str;
  reverse(str);
}
