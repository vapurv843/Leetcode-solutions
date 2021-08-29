#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll summ = 0;
    vector<int> v(n);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<k;i++)
    {
        if(v[i]<0)
        {
            v[i]=v[i]*(-1);
        }
        else
        {
            break;
        }
    }
    for(int i = 0;i<n;i++)
    {
        if(v[i]>0)
        {
            summ+=v[i];
        }
    }
    cout<<summ<<endl;
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