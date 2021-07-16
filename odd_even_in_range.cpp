class Solution {
public:
    int countOdds(int low, int high) {
        int res = (high-low)/2;
        if((high%2!=0) or(low%2!=0))
        {
            res++;
        }
        return res;
        
    }
};