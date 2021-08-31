class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakpoint = -1;
        for(int i = nums.size()-1;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            {
                breakpoint = i-1;
                break;
            }
            
            
        }
        if(breakpoint<0)
        {
            reverse(nums.begin(),nums.end());
            return ;
        }
        for(int i = nums.size()-1;i>=0;i--)
        {
            if(nums[i]>nums[breakpoint])
            {
                swap(nums[i],nums[breakpoint]);
                reverse(nums.begin()+breakpoint+1,nums.end());
                break;
            }
        }
        
        
    }
};