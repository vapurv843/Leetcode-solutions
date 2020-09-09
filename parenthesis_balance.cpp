#include<bits/stdc++.h>
using namespace std;
bool arePair(char open ,char close)
{
    if(open=='(' && close == ')')
    {
        return true;
    }
    else if(open = '{' && close == '}')
    {
        return true;
    }
    else if(open == '[' && close ==']')
    {
        return true;
    }
    return false;
    
}
int string_balanced(string s)
{
    stack <char> s1;
    for(int i = 0;i<s.length();i++)
    {
        if(s[i]=='[' || s[i]== '{' ||s[i]== '(')
        {
            s1.push(s[i]);
        }
        else if(s[i]==']' || s[i]=='}' || s[i]==')')
        {
            if(s1.empty() || !arePair(s1.top(),s[i]))
            {
                cout<<"This block is executed"<<endl;
                return false;
            }
            else
            {
                cout<<"Pop block is executed"<<endl;
                s1.pop();
            }
            
        }
    }
     return s1.empty()? true :false;
}
int main()
{
    string s;
    cin>>s;
    if(string_balanced(s))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    
}


**Test cases:- {}{{}-->N0**
