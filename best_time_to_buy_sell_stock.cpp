class Solution {
public:
    int maxProfit(vector<int>& cost) {
        int minprice = INT_MAX;
        int maxprofit = 0;
        for(int i = 0;i<cost.size();i++)
        {
            if(cost[i]<minprice)
            {
                minprice = cost[i];
            }
            else if(cost[i]-minprice>maxprofit)
            {
                maxprofit = cost[i]-minprice;
            }
        }
        return maxprofit;
        
        
    }
};