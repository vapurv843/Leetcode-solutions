#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;
void solve()
{
    ll a,b;
    cin>>a>>b;
    ll count = 0;
    while(a)
    {
        count++;
        a=a/b;
    }
    cout<<count<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}