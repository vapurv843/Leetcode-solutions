#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    int sum = 0;
    ll x=0;
    vector<int> v(n);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%n==0)
    {
        for(int i = 0;i<n;i++)
        {
            if(v[i]>sum/n)
            {
                x+=1;
            }
        }
        cout<<x<<endl;
    }
    else{
        cout<<"-1"<<endl;
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