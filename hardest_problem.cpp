#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;
void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans = min(a,min(b,c));
    if(ans == a)
    {
        cout<<"Draw"<<endl;
    }
    else if(ans == b)
    {
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
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