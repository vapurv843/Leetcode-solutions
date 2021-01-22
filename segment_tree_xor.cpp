#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
ll s[1000000]={0};
void built(ll a[],int low,int high,int pos)
{
	if(low==high)
	{
		s[pos]=a[low];
		return;
	}
	int mid=(low+high)/2;
	built(a,low,mid,2*pos+1);
	built(a,mid+1,high,2*pos+2);
	s[pos]=s[2*pos+1]^s[2*pos+2];
}
ll query(int ql,int qh,int low,int high,int pos)
{
	if(ql<=low && qh>=high)
		return s[pos];
	if(ql>high || qh<low)
		return 0;
	int mid=(low+high)/2;
	return query(ql,qh,low,mid,2*pos+1)^query(ql,qh,mid+1,high,2*pos+2);
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int q;cin>>q;
		ll a[n];
		ll ans=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			ans=ans^a[i];
		}		
		//cout<<ans<<nl;
		built(a,0,n-1,0);
		while(q--)
		{
			int l,r;cin>>l>>r;
			ll temp=query(l-1,r-1,0,n-1,0);

			cout<<(ans^temp)<<nl;
		}
	}
}