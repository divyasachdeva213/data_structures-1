#include<iostream>
#include<string.h>
using namespace std;
void insert(string str1,string str2,int index)
{
   int len1=str1.size();
   int len2=str2.size();
   char *ch1=&str1[0];
   char *ch2=&str2[0];
   char ch[len1+len2];
   int i;
  for(i=0;i<index;i++)
   {
      ch[i]=ch1[i];
   }
  int l=index+1;
  for(i=0;i<len2;i++)
  {
     ch[l]=ch2[i];
     l++;
  }
  
  
 int k=(index+len2);
  for(i=index;i<=len1;i++)
  {
     ch[k+1]=ch1[i];
     k++;
  }
  for(i=0;i<=(len1+len2);i++)
  {
      cout<<ch[i];
  }
}
int main()
{
   string str1,str2;
  cout<<"enter the string:";
   getline(cin,str1);
  cout<<"enter 2nd string:";
  getline(cin,str2);
  int index;
  cout<<"enter the index:";
  cin>>index;
  insert(str1,str2,index);
  

}
