#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll solve1(ll n){
    ll ans=0;
    ll mul=1;
    for(ll i=0;i<12;i++){
        ans+=n/mul;
        mul*=10;
    }
    return ans;
}
void solve(){
    ll l,r;
    cin>>l>>r;
    ll a = solve1(l);
    ll b = solve1(r);
    cout<<abs(a-b)<<endl;
}

int main(){
    
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}

