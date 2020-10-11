#include<bits/stdc++.h>
using namespace std;
int lcs(string x,string y,int m,int n)
{
    int result = 0;
    int dp[m+1][n+1];
    for(int i = 0;i<m+1;i++)
    {
        for(int j = 0;j<n+1;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
        }
    }
    for(int i = 1;i<m+1;i++)
    {
        for(int j = 1;j<n+1;j++)
        {
            if(x[i-1]==y[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
                result = max(result, dp[i][j]);
            }
            else
            {
                dp[i][j]=0;
            }
        }
    }
    return result;
}
int main()
{
    // memset(dp,-1,sizeof(dp));
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
        int k = lcs(x,y,m,n);
        cout<<k;
        cout<<endl;
    }
}