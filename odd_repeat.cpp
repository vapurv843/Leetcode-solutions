#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;
void solve()
{
    ll n,k,s;
      cin>>n>>k>>s;
      s = s-(n*n);
      cout<<s/(k-1)<<endl;
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