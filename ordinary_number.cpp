#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n ;
    cin>>n;
    ll ans = 0;
    for(ll i=1;i<=9;i++)
    {
        for(ll j = i;j<=n;)
        {
            ans++;
            j = (j*10)+i;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        solve();
    }
}