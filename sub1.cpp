class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector< vector<int> > res;
        if (n == 0){ return res;}
        
        for (int i=0;i< pow(2,n); i++){
            vector<int> tmp;
            for (int j=0;j<n;j++){
                if ( (i& (1<<j)) > 0 ){
                    tmp.push_back(nums[j]);
                }
            }
            res.push_back(tmp);
        }
        return res;
    }
        
    
};