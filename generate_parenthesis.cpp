#include<bits/stdc++.h>
using namespace std;



void solve(int open,int close,string op,vector<string> &v)
{
    if(open == 0 and close ==0)
    {
        v.push_back(op);
        return ;
    }
    if(open!=0)
    {
        string op1 = op;
        op1+='(';
        solve(open-1,close,op1,v);
    }
    if(close>open)
    {
        string op2 = op;
        op2+=')';
        solve(open,close-1,op2,v);
    }
    return;
}
vector<string> AllParenthesis(int n) 
{
    // Your code goes here 
    int open = n;
    int close = n;
    vector<string> v;
    string op = "";
    solve(open,close,op,v);
    return v;
}
int main()
{
    int n=2;
    vector<string> v= AllParenthesis(n);
    for(auto s:v)
    {
        cout<<s<<" ";
    }
    cout<<endl;
}