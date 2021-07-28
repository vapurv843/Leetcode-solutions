#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll x,y;
cin>>x>>y;
if(__gcd(x,y)>1)
{
    cout<<0<<endl;
}
else if (__gcd(x+1,y)>1)
{
 cout<<1<<endl;
}
else if (__gcd(x,y+1)>1)
{
 cout<<"1"<<endl;
}
else
cout<<2<<endl;

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