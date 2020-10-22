class Solution{
public:
    bool palind(string x)
{
    string y = x;
    reverse(x.begin(),x.end());
    int n = y.length();
    int m = x.length();
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
    int solve(string s,int i,int j)
    {
        int mi = INT_MAX;
        if(i==j || i>j)
        {
            return 0;
        }
        if(palind(s))
        {
            return 0;
        }
        for(int k = i;k=j-1;k++)
        {
            int temp = 1+solve(s,i,k)+solve(s,k+1,j);
            if(temp<mi)
            {
                mi = temp;
            }
            
        }
        return mi;
    }

    int palindromicPartition(string str)
    {
        int n = str.length();
        int k = solve(str,0,n-1);
        return k;
    }
};