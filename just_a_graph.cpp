#include<bits/stdc++.h>  
#define ll long long  
using namespace std; 
int main(){ 
    ll t;cin>>t; 
    while(t--){ 
        ll n;cin>>n; 
        ll a[n]; 
        ll ans=0; 
        map<int,int> mp; 
        for(int i=0;i<n;i++){ 
            cin>>a[i]; 
            mp[a[i]-i-1]++; 
            if(mp[a[i]-i-1]==1){ 
                ans++; 
            } 
        } 
        if(mp[a[0]-1]==n){ 
            cout<<n<<endl; 
        } 
        else{ 
            cout<<1<<endl; 
        } 
    } 
    return 0; 
}