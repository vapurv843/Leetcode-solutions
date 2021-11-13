class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int mx = -1;
        int ans = INT_MAX;
        for(auto &a : piles)
        {
            mx = max(mx,a);
        }
        int r = mx;
        while(l<=r)
        {
            int mid = (l+r)/2;
            int curr_k = 0;
            for(int i = 0;i<piles.size();i++)
            {
                curr_k+=(piles[i]-1)/mid+1;
                
            }
            if(curr_k<=h)
            {
               ans =mid;
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        return ans;
        
    }
};