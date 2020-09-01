#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool ispair(char open, char close)
{
    if(open == '(' && close == ')') return true;
    if(open == '{' && close == '}') return true;
    if(open == '[' && close == ']') return true;
    return false;
}
int  isbalanced(string s)
{
    stack<char> s1;
    for(int i = 0;i<s.length();i++)
    {
        if(s[i]=='['||s[i]=='(' || s[i]=='{')
        {
            s1.push(s[i]);
        }
        else if(s[i]==']' || s[i]==')'|| s[i]=='}')
        {
            if(s1.empty() ||!ispair(s1.top(),s[i]))
            {
                return false;
            }
            else
            {
            s1.pop();
            }
        }
        
        
    }
    s1.empty()?true:false;
} 
int main()
{
    string s;
    cin>>s;
    if(isbalanced(s))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    
}