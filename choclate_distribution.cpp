#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
int choclate(int arr[],int n,int m)
{
    sort(arr,arr+n);
    int i = 0;
    int j = n-1;
    int k =INT_MAX;
    
    for(int i = 0;i+m-1<n;i++)
    {
        k = min(k,(arr[i+m-1]-arr[i]));
    }
    return k;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int m;
	    cin>>m;
	    int k = choclate(arr,n,m);
	    cout<<k<<endl;
	}
}