#include<bits/stdc++.h>
using namespace std;
int lcs(string x,string y,int k)
{
    int m = x.length();
    int n = y.length();
    int dp[m+1][n+1];
    for(int i = 0;i<m+1;i++)
    {
        dp[i][0]=0;
    }
    for(int i = 0;i<n+1;i++)
    {
        dp[0][i]=0;
    }
    for(int i = 1;i<m+1;i++)
    {
        for(int j = 1;j<n+1;j++)
        {
            if(x[i-1]==y[j-1] && i!=j)
            {
                dp[i][j]= 1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
     return dp[m][n];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        string s;
        cin>>s;
        string k = s;
        int p = lcs(k,s,m);
        cout<<p<<endl;
    }
}