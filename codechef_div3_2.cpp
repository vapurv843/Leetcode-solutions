#include<bits/stdc++.h>
using namespace std ;
void solve()
{
    int a,b;
    cin>>a>>b;
    float diff = 6-a-b;
    if(diff>=0)
    {
        cout<<diff/6<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}