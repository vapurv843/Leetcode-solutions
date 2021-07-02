class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int frst = nums[nums.size()-1]*nums[nums.size()-2];
        int second = nums[0]*nums[1];
        return frst-second;
        
    }
};