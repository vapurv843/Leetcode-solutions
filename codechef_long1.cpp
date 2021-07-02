#include<bits/stdc++.h>
using namespace std ;
void solve()
{
    int D,x,y,z;
    cin>>D>>x>>y>>z;
    int first = x*7;
    int day_left = 7-D;
    int second = y*D+z*day_left;
    cout<<max(first,second)<<endl;
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