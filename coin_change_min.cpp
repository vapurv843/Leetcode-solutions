class Solution{

	public:
	int minCoins(int arr[], int n, int sum) 
	{ 
	    int dp[n+1][sum+1];
	    
	    for (int i=0;i<=sum;i++) {
	        dp[0][i] = INT_MAX-1;
	    }
	    for (int i=0;i<=n;i++) {
	        dp[i][0] = 0;
	    }
	    
	    for (int i=1;i<=n;i++) {
	        for (int j=1;j<=sum;j++) {
	            if (arr[i-1] <= j) {
	                dp[i][j] = min (1+dp[i][j-arr[i-1]] , dp[i-1][j]);
	            }else {
	                dp[i][j] = dp[i-1][j];
	            }
	        }
	    }
	    if (dp[n][sum] != INT_MAX-1)
	    return dp[n][sum];
	    return -1;
	    
	} 
	  
};