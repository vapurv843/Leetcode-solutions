#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;
void solve()
{
    ll k;
    cin>>k;
    int quo = k/3;
    int next = quo+1;
    int rem = k%3;
    if(rem==0)
    {
        cout<<quo<<" "<<quo<<endl;
    }
    else{
        if(quo+2*next==k)
        {
            cout<<quo<<" "<<next<<endl;
        }
        else{
            cout<<next<<" "<<quo<<endl;
        }
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