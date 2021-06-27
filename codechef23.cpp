#include<bits/stdc++.h>
using namespace std ;
void solve()
{
    long long a,b,c,d;
    cin>>a>>b>>c;
    long long k = 2*(180+a);
    long long diff = k-(b+c);
    cout<<diff<<endl;
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