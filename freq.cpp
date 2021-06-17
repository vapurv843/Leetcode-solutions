class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        stack<int> s;
        vector<int> res;
        for(int i = 0;i<nums.size()-1;i+=2 )
        {
            int freq = nums[i];
            while(freq>0)
            {
                res.push_back(nums[i+1]);
                freq--;
            }
        }
        return res;
        
        
    }
};