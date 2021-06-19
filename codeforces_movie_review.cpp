#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int  n;
    cin>>n;
    ll ans = 0;
    for(int i = 0;i<n;i++)
    {
        int k ;
        cin>>k;
        if(k==1 or k==3)
        {
            ans++;
        }
    }
    cout<<ans<<endl;

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