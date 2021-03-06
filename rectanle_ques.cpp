class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int res = 0;
        int side = 0;
        int maxlen = 0;
        for(auto x:rectangles)
        {
            side = min(x[0],x[1]);
            if(maxlen<side)
            {
                maxlen = side;
                res=1;
            }
            else if(maxlen==side) res++;
        }
        return res;
        
    }
};