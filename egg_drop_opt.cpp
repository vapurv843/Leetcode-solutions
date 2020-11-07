#include<bits/stdc++.h>
using namespace std;
//int static dp[11][51];
int dp[50][50];
int findAttempts(int e,int f)
{   
    
    if(e==1)
        return f;
    if(f==0||f==1)
        return f;
    
    if(dp[e][f]!=-1)
        return dp[e][f];
        
    int mn1=INT_MAX;
    for(int k=1;k<=f;k++)
    {
        int temp=1+max(findAttempts(e-1,k-1) ,findAttempts(e,f-k));
        mn1=min(mn1,temp);
    }
    return dp[e][f]=mn1;
}
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));

    int egg;
    cin>>egg;
    int fl;
    cin>>fl;
    int n= findAttempts(egg,fl);
    cout<<n<<endl;
    }
    
}
