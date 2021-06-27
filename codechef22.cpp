#include<bits/stdc++.h>
using namespace std ;
void solve()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a+c==180 and b+d==180)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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