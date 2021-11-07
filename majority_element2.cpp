class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int count = 0;
        int n = nums.size();
        int k = floor(n/3);
        for(int i = 0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto s : mp)
        {
            if(s.second>k)
            {
                ans.push_back(s.first);
            }
        }
        return ans;
    }
};