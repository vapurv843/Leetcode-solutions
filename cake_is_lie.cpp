#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;
void solve()
{
    ll m,n,k;
    cin>>m>>n>>k;
    if(n*m-1==k)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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