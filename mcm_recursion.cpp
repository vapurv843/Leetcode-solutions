#include <bits/stdc++.h>
using namespace std;
long long solve(int arr[],int i,int j)
{
    if(i==j) return 0;
    int mn = INT_MAX;
    int count = 0;
    for(int k = i;k<=j-1;k++)
    {
         count = solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
        if(count<mn)
        {
            mn = count;
        }
    }
    return mn;
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
	    long long k=solve(arr,1,n-1);
	    cout<<k<<endl;
	    
	}
}