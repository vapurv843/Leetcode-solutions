class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int n = nums.size();
        int end = n-1;
        while(start<=end)
        {
            int mid = start +(end-start)/2;
            if(nums[mid ]==target)
            {
                return mid;
            }
            if(nums[mid]<target)
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
            
        }
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]>target)
            {
                return i;
            }
        }
        return nums.size();
        
    }
};