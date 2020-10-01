#include<bits/stdc++.h>
using namespace std;
int dp[1002][1002];
int knap(int w[],int val[],int W,int n)
{
    if(n==0 || W==0)
    {
        return 0;
    }
        
    if(dp[n-1][W]!=-1)
    {
        return dp[n-1][W];
    }
    if(w[n-1]<=W)
    {
        dp[n-1][W] = max(val[n-1]+knap(w,val,W-w[n-1],n-1),knap(w,val,W,n-1));
        return dp[n-1][W];
        
    }
    else
    {
        dp[n-1][W]= knap(w,val,W,n-1);
        return dp[n-1][W];
    }
    

}


int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    int weight[n];
    int value[n];
    
    for(int i = 0;i<n;i++)
    {
        cin>>weight[i];
    }
    for(int i = 0;i<n;i++)
    {
        cin>>value[i];
    }
    int weight_max = 2;
    int k = knap(weight,value,weight_max,n);
    cout<<k<<endl;
}