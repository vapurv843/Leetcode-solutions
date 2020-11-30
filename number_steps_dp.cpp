#include<bits/stdc++.h>
using namespace std;
int dp[100];
int step(int n)
{
    if(n==1 || n==0) return 1;
    if(n==2) return 2;
    if(dp[n]!=0) return dp[n];
    int l =  step(n-1)+step(n-2)+step(n-3);
    dp[n]=l;
    return dp[n];
    
}
int main()
{
    memset(dp ,0,sizeof(dp));
    int n ;
    cin>>n;
    int k = step(n);
    cout<<k<<endl;
}