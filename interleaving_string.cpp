

long long solve(string x,string y)
{
    long long m = x.length();
    long long n = y.length();
    long long dp[m+1][n+1];
    for(int i= 0;i<m+1;i++)
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
                dp[i][j]= 1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    if(dp[m][n]==n) return 1;
    else {return 0;}
}



int Solution::isInterleave(string A, string B, string C) {
    if(solve(C,A)&&solve(C,B))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
