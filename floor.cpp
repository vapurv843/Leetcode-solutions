#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int n,k;cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    
	    for(int i=0;i<n;i++){
	        if(k>a[n-1]){cout<<n-1<<endl;break;} 
	        if(k>a[i]) continue;
	        else if(k<a[0]) {cout<<-1<<endl; break;}
	        else if(k==a[i]){cout<<i<<endl; break;}
	        else if(k<a[i]){cout<<i-1<<endl; break;}
	        
	      }
	}
	return 0;
}