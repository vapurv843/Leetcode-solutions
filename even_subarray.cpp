#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    ll ans = (n*(n+1))/2;
    if(ans%2==0)
    {
        cout<<n<<endl;
    }
    else
    {
        cout<<n-1<<endl;
    }
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