#include<bits/stdc++.h>
using namespace std;
bool lcs(string x,string y,int m)
{
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
        for(int j =1;j<n+1;j++)
        {
            if(x[i-1]==y[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    if(m==dp[m][n])
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    string s;
    cin>>s;
    string l=s;
    reverse(s.begin(),s.end());
    int k = lcs(l,s,l.length());
    if(k)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"no";
    }
    
}