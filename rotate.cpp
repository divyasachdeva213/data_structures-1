#include<iostream>
#include<string.h>
using namespace std;
void check_rotation(string str,string str1)
{
  // char str2[20];
 // char str3[20];
    char *str2=&str[0];
    char *str3=&str1[0];
   
     
     strcat(str2,str2);
    char *p=strstr(str2,str3);
   if(p)
     {
         cout<<"it is rotated";
     }
else
{
   cout<<"it is not rotated";
}

     
   
}
int main()
{
  string str,str1;
  cout<<"enter the string:";
  cin>>str;
  cout<<"enter the rotated string:";
  cin>>str1;
  check_rotation(str,str1);

}
