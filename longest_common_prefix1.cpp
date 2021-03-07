#include<bits/stdc++.h>
using namespace std ;
string solve1(string a ,string b)
{
    int m = a.size();
    int n = b.size();
    string ans ;
    for(int i = 0,j=0;i<m and j<n ;i++,j++)
    {
        if(a[i]!=b[i])
        {
            break;
        }
        ans.push_back(a[i]);
    }
    return ans ;
}
string solve(vector<string> &st)
{
    int n = st.size();
    string ans = st[0];
    for(int i = 1;i<n;i++)
    {
        ans = solve1(ans,st[i]);
    }
    return ans ;
}
int main()
{
    vector<string> v {"flower","flow","flwty"};
    string s = solve(v);
    cout<<s<<endl;
}