#include<bits/stdc++.h>
using namespace std ;
using ll = long long;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
 
    ll t,n;
    cin>>t;
 
 
    while(t--){
        cin>>n;
        ll ar[2*n];
        map<ll,ll> mp;
        for(ll i=0;i<2*n;i++){
            cin>>ar[i];
            mp[ar[i]]++;
        }
 
        vector<ll> v;
 
        ll flag=1;
 
        for(auto it: mp){
            if(it.second!=2){
                flag=0;break;
            }
 
            for(ll i=0;i<it.second/2;i++){
                v.push_back(it.first);
            }
        }
 
//        pr(v,flag);
 
        sort(v.begin(),v.end());reverse(v.begin(),v.end());
 
        if(!flag){
            cout<<"NO\n";continue;
        }
 
        ll prev=0;
 
        set<ll> st;
 
        for(ll i=0;i<v.size();i++){
            ll curr=v[i]-prev;
 
            ll temp=n-i;
            temp*=(ll)2;
 
            if(curr%temp!=0 || curr==0 || curr<0){
                flag=0;
                break;
            }
 
            st.insert(curr/temp);
 
            prev+=(ll)2*(curr/temp);
        }
 
 
        if(flag && st.size()==n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
 
 
    }
}