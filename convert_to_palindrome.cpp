bool solve1(string x,string y)
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
    if(dp[m][n]==m) return 1;
    int pop= abs(dp[m][n]-m);
    if(pop==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int Solution::solve(string A) {
    int n = A.length();
    string b = A;
    reverse(A.begin(),A.end());
    int ll= solve1(A,b);
    return ll;
    
}
