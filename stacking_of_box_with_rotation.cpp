class Solution {
public:
    int maxHeight(vector<vector<int>>& cuboids) {
        int n = cuboids.size();
        for(int i = 0; i < n; i++)
            sort(cuboids[i].rbegin(), cuboids[i].rend());
        sort(cuboids.rbegin(), cuboids.rend());
        vector<int> dp(n, 0);
        for(int i = 0; i < n; i++)
            dp[i] = cuboids[i][0];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(cuboids[j][0] >= cuboids[i][0] 
                   && cuboids[j][1] >= cuboids[i][1] 
                   && cuboids[j][2] >= cuboids[i][2])
                    dp[i] = max(dp[i], dp[j] + cuboids[i][0]);
            }
        }
        int ret = 0;
        for(int i = 0; i < n; i++)
            ret = max(ret, dp[i]);
        return ret;
        
    }
};