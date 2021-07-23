#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(int i = 0;i<s.length();i++)
    {
        mp[s[i]]++;
    }
    int count = 0;
    for(auto i :mp)
    {
        if(i.second>1)
        {
            count++;
        }
    }
    int res = mp.size()+count;
    cout<<res/2<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
