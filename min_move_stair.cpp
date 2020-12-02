class Solution {
public:
    int minCostClimbingStairs(vector<int>& penalty) {
        int numSteps = penalty.size();
        if(numSteps < 2)
            return 0;
        vector<int> dp(numSteps, 0);
        dp[0] = penalty[0];
        dp[1] = penalty[1];
        for(int i = 2; i < penalty.size(); i++) {
            dp[i] = penalty[i] + min(dp[i - 1], dp[i - 2]);
        }
        return min(dp[numSteps - 1], dp[numSteps - 2]);
        
    }
};