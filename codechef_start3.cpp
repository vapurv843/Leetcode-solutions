#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll a,b;
    cin>>a>>b;
    ll size = pow(2,a);
    
    cout<<(2*min(b, size/2)*(size-1))<<endl;
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