#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll a,b;
    cin>>a>>b;
    ll res = a+b;
    if(res<3)
    {
        cout<<1<<endl;
    }
    if(res>=3 and res<=10)
    {
        cout<<2<<endl;
    }
    if(res>=11 and res<=60)
    {
        cout<<3<<endl;
    }
    if(res>60)
    {
        cout<<4<<endl;
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