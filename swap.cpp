#include<iostream>
#include<string.h>
using namespace std;
void swap(string str1,string str2)
{
 cout<<"before swap:  "<<str1<<" "<<str2<<endl;
   string temp;
  temp=str1;
  str1=str2;
  str2=temp;
   cout<<"after swap:  "<<str1<<" "<<str2;
}
int main(void)
{
   string str1,str2;
   cin>>str1;
   cin>>str2;
   swap(str1,str2);
}
