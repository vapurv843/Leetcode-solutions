#include<bits/stdc++.h>

using namespace std ;
typedef long long ll;
void solve()
{
    ll p1,p2,p3,p4;
    cin>>p1>>p2>>p3>>p4;
    ll x1 = min(p1,p2);
    ll y1 = max(p1,p2);
    ll x2 = min(p3,p4);
    ll y2 = max(p3,p4);
    if(x1>y2 or x2>y1)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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