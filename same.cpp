#include<iostream>
#include<string.h>
using namespace std;
void check(string str1,string str2)
 {
  int i,c=0;
    int len1=str1.size();
   int len2=str2.size();


    if(len1!=len2)
   {
     cout<<"strings are not same";
     
   }
    else{
     for(i=0;i<len1;i++)
      {
         if(str1[i]>='A'&&str1[i]<='Z')
         {
              str1[i]=str1[i]+32;
         }
      }
      for(i=0;i<len2;i++)
      {
          if(str2[i]>='A'&&str2[i]<='Z')
           {
                 str2[i]=str2[i]+32;
           }
      }
      
      for(i=0;i<len1;i++)
      {  
       if(str1[i]==str2[i])
          {
             c=1;
          }
      }
           
    if(c==1)
      {
          cout<<"string are same";
      }
   else
     {
         cout<<"string are not same";
     }
       }
      
 }
int main()
{
   
  string str1;
  string str2;
  cout<<"enter the string1:";
  cin>>str1;
  cout<<endl;
  cout<<"enter the string2:";
  cin>>str2;
  check(str1,str2);
}
