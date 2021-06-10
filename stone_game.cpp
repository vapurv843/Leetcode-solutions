#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;//number of test-cases
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int a1,a2; 
        for(int i=0;i<n;i++){
            if(a[i]==1) a1=i;
            if(a[i]==n) a2=i; 
        }
        
        
        int left1 =a1+1 ;
        int left2=a2+1;
        int right1=n-a1;
        int right2=n-a2;
        
        int ans1=max(left1,left2);
        int ans2=max(right1,right2);
        int ans3 =min(left1+right2,left2+right1); 
        int ans=min(ans1,min(ans2,ans3)); 
        cout<<ans<<"\n";
    }
    return 0;
}