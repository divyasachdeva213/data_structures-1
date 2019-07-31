#include<iostream>
#include<string.h>
using namespace std;
void max_occur(string str)
{
   int len=str.size();
   int max=-999,flag;
    char *p=&str[0];
   int i,j,c;
   for(i=0;i<len;i++)
{
      flag=0;
      for(j=i+1;j<len;j++)
       {
          if(p[i]==p[j])
            {
               flag++;
              
            }
       }
  if(flag>max)
   {
      max=flag;
      c=i;
   }
}
cout<<"maximum occured character in string:";
for(i=0;i<len;i++)
  {
    if(i==c)
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
  max_occur(str);
}
