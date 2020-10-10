#include<bits/stdc++.h>
using namespace std;
int   dp[102][102];
int lcs(string x,string y ,int m,int n)
{
    if(m<0 || n<0)
    {
        return 0;
    }
    if(dp[m][n]!=-1)
    {
        return dp[m][n];
    }
    if(x[m-1]==y[n-1])
    {
         dp[m][n]= 1+lcs(x,y,m-1,n-1);
         return dp[m][n];
    }
    else
    {
         dp[m][n]=max(lcs(x,y,m,n-1),lcs(x,y,m-1,n));
         return dp[m][n];
    }
}
int main()
{
     memset(dp,-1,sizeof(dp));
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
       
        
        string x;
        cin>>x;
        string y;
        cin>>y;
        int k = lcs(x,y,m-1,n-1);
        cout<<k;
        cout<<endl;
    }
}