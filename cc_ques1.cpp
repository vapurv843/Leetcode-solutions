#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int n = 5;
	while(n--)
	{
	    ll x,y,z;
	    cin>>x>>y>>z;
	     if(x+y==z) cout<<"YES"<<endl;
	    else if(x+z==y) cout<<"YES"<<endl;
	    else if(y+z==x) cout<<"YES"<<endl;
	    else {cout<<"NO"<<endl;}
	}
	
}
