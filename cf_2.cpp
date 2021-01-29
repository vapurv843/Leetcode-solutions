#include<bits/stdc++.h>
using namespace std ;
using ll = long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n ;
        cin>>n;
        ll arr[n];
        for(ll i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        int res = INT_MIN;
        int count = 0;
        for(ll i = 0;i<n;i++)
        {
            if(arr[i]==arr[i-1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            res = max(res,count);
            
        }
        cout<<res<<endl;
    }
}