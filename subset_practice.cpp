#include<bits/stdc++.h>
using namespace std;
int subset(int arr[],int n,int sum)
{
    bool dp[n+1][sum+1];
    for(int i = 1;i<n;i++)
    {
        dp[0][i]=1;
    }
    for(int i = 0;i<)
}
int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    if(subset(arr,n,sum))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<" No;"
    }
    
}