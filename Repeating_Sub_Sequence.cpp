int  ll(string x,string y)
{
    int m = x.length();
    int n = y.length();
    if(m<=2) return 0;
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




int Solution::anytwo(string A) {
    string m= A;
    //reverse(A.begin(),A.end());
    int  k = ll(A,m);
    if(k>1) return 1;
    else
    {
        return 0;
    }
}
