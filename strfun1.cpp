#include<iostream>
#include<string.h>
using namespace std;
void strcpy(string str1,string str2)
{
   int i,j=0;
     char *ch1=&str1[0];
     char *ch2=&str2[0];
   for(i=0;ch1[i]!='\0';i++)
   {
         ch2[j]=ch1[i];
         j++;
   }
   ch2[j]='\0';

   for(i=0;i<strlen(ch1);i++)
   {
        cout<<ch1[i];
   }
  cout<<endl;
  for(i=0;i<strlen(ch2);i++)
   {
           cout<<str2[i];
   }
  cout<<endl;
}
void strlen(string str)
  {
   int i,count=0;
  char *ch=&str[0];
  for(i=0;ch[i]!='\0';i++)
   {
         count++;
   }
cout<<"the strlen is:"<<count<<endl;
}

void strlower(string str)
{
  int i;
   char *ch=&str[0];
  for(i=0;ch[i]!='\0';i++)
  {
        if(ch[i]>='A'&&ch[i]<='Z')
           {
              ch[i]+=32;
           }
  }
  cout<<"the string in lower:";
  for(i=0;ch[i]!='\0';i++)
  {
        cout<<ch[i];
  }
cout<<endl;
}
void strupper(string str)
{
   int i;
  char *ch=&str[0];
  for(i=0;ch[i]!='\0';i++)
  {
      if(ch[i]>='a'&&ch[i]<='z')
         {
              ch[i]-=32;
         }
  }
  cout<<"the string in upper:";
    for(i=0;ch[i]!='\0';i++)
     {
         cout<<ch[i];
     }
 cout<<endl;
}
void strreverse(string str)
{
  int i,k=0;
 char *ch=&str[0];
 char ch2[30];
 int len=str.size();
  for(i=len-1;i>=0;i--)
  {
      ch2[k]=ch[i];
      k++;
  }
  ch[k]='\0';
for(i=0;ch2[i]!='\0';i++)
{
   cout<<ch2[i];
}
cout<<endl;
}
int main(void)
{
  cout<<"enter the string1:";
   string str1,str2;
   getline(cin,str1);
  cout<<"enter the string3:";
    string str3;
   getline(cin,str3);
  strlen(str1);
  cout<<"the string and after copying:"<<endl; 
  strcpy(str1,str2);
  strlower(str1);  
   strupper(str3);
cout<<"string1 in reverse:";
  strreverse(str1);
   
}
