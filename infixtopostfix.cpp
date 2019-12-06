#include<iostream>
#include<stack>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<algorithm>
using namespace std;
/*string reverse(string s)
{
    string str;
    int j=0;
    for(int i=s.length()-1;i>=0;i--)
     {
         str[j]=s[i];
*/      

int prec(char c)
{
   if(c=='^')
     return 3;
   else if(c=='*' || c=='/')
   return 2;
  else if(c=='+' || c=='-')
   return 1;
   else
    return -1;
}
string postfix(string s)
{
    int l=s.length();
   string ns;
   stack<char> st;
   st.push('N');
   for(int i=0;i<l;i++)
   {
      if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
         {
              st.push(s[i]);
         }
      else if(s[i]=='(')
        {
             st.push(s[i]);
        }
      else if(s[i]==')')
       {
             while(st.top()!='N' && st.top()!='(')
         {
          char c=st.top();
             st.pop();
           ns+=c;
         }
           if(st.top()=='(')
             {
                 char c=st.top();
                  st.pop();
             }
       }
      else
        {
              while(st.top()!='N' && prec(s[i])<=prec(st.top()))
               {
                     char c=st.top();
                       st.pop();
                     ns+=c;
               }
               st.push(s[i]);

   }
     }
         
                while(st.top()!='N')
                   {
                        char c=st.top();
                          st.pop();
                         ns+=c;
                    }
                   
     return ns;     
   // cout<<ns;
}
void prefix(string s)
  {
     int l=s.length();
reverse(s.begin(),s.end());
    for(int i=0;i<l;i++)
     {
        if(s[i]=='(')
         {
            s[i]=')';
             i++;
         }
        else if(s[i]==')')
         {
              s[i]='(';
               i++;
         }
     }
    string ans= postfix(s);  
   reverse(ans.begin(),ans.end());
      cout<<ans;  
  }
int main(int argc,char* argv[])
{
   string s;
   s=(argv[1]);
   prefix(s);
}


