#include<iostream>
#include<stack>
#include<stdlib.h>
using namespace std;
bool isoperand(char x)
{
   return ((x>='a' && x<='z')||(x>='A' && x<='Z'));
}
void pretoinfix(string exp)
{
   stack<string> s;
   int l=exp.length();
    for(int i=l-1;i>=0;i--)
    {
        if(isoperand(exp[i]))
         {
             string op(1,exp[i]);
              s.push(op);
         }
       else
        {
             string op1=s.top();
               s.pop();
             string  op2=s.top();
                s.pop();
            s.push("("+op1+exp[i]+op2+")");
        }
    } 
     cout<<s.top();
}
int main(int argc,char* argv[])
{
  string s;
   s=argv[1];
   pretoinfix(s);
}
