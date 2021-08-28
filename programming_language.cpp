#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll a,b,a1,b1,a2,b2;
    cin>>a>>b>>a1>>b1>>a2>>b2;
    if(a==a1 and b==b1 or a==b1 and b == a1)
    {
        cout<<"1"<<endl;
    }
    else if(a==b2 and b == a2 or a==a2 and b==b2)
    {
        cout<<"2"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
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