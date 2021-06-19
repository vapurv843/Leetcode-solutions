#include<bits/stdc++.h>
using namespace std ;
void solve()
{
    long a,b,c,d,k;
	       cin>>a>>b>>c>>d>>k;
	       int ans=abs(c-a)+abs(d-b);
	       if(ans==k) 
	         cout<<"YES";
	       else if(ans>k)
	         cout<<"NO";
	       else if((k-ans)%2==0)
	         cout<<"YES";
	       else
	         cout<<"NO";
	     cout<<endl;
}




int main()
{       
	      
	    long t;
	    cin>>t;
	    while(t--){
	       solve();
	    }
	return 0;
}