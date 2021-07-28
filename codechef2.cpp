#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    vector<int> v(n);
    int res = INT_MIN;
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
        res = min(res,v[i]);
    }
    cout<<res<<endl;
    for(int i = 0;i<n;i++)
    {
        v[i]^=res;

    }
    int ans = 0;
    for(int i = 0;i<n;i++)
    {
        ans|=v[i];
    }
    cout<<ans<<endl;
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
