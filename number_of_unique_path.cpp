int NumberOfPath(int a, int b) {
    int  dp[a+1][b+1];
    
    for(int i = 0;i<a+1;i++)
    {
        dp[i][0]=1;
    }
    for(int i = 0;i<b+1;i++)
    {
        dp[0][i]=1;
    }
    for(int i = 1;i<a+1;i++)
    {
        for(int j = 1;j<b+1;j++)
        {
            dp[i][j]= dp[i-1][j]+dp[i][j-1];
        }
    }
    return dp[a-1][b-1];
}
