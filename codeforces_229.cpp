#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll a,b;
    cin>>a>>b;
    
    ll k = max(a,b);
    ll l = min(a,b);
    if(a==b)
    {
        cout<<0<<" "<<0<<endl;
    }
    else{ 
           ll res = k-l; 
            cout << res << " "<<min({k%res,res-l%res}) << endl; 
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

