class Solution {
public:
    void solve(vector<int> &nums,int i,vector<vector<int>> &ans,vector<int> &sub)
    {
        ans.push_back(sub);
        for(int j = i;j<nums.size();j++)
        {
            sub.push_back(nums[j]);
            solve(nums,j+1,ans,sub);
            sub.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> sub;
        solve(nums,0,ans,sub);
        return ans;
    }
};