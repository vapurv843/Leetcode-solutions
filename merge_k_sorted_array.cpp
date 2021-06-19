#include <iostream>
using namespace std;
using ll = long long;
ll count_odd(ll arr[],ll n)
{
    ll count = 0;
    for(ll i = 0;i<n;i++)
    {
        if(arr[i]&1==1)
        {
            count++;
        }
    }
    return count;
}

int main() {
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
	    ll count=count_odd(arr,n);
	    cout<<count<<endl;
	}
	
}
