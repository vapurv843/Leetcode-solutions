class Solution {
public:
    int maxProfit(vector<int>& cost) {
        int res = 0;
        int temp=0;
        for(int i = 0;i<cost.size();i++)
        {
            for(int j = i+1;j<cost.size();j++)
            {
                temp = cost[j]-cost[i];
                res = max(temp,res);
                
            }
        }
        return res;
        
    }
};