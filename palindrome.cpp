#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
void palindrome(string str1)
{
   int i,j=0;
 char *str3=&str1[0];
  
   char str2[20];
   int n=strlen(str3);
  for(i=n-1;i>=0;i--)
  {               
      str2[j]=str3[i];
     j++;
  }
   
  int c=0;
  if(strcmp(str2,str3)==0)
   {
      c=1;
   }
  if(c==1)
  { cout<<"string is palindrome";}
  else
   {  cout<<"string is not palindrome";}
    
}
int main()
{
    string str1;
  cout<<"enter the string:";
   cin>>str1;
  palindrome(str1);
}

