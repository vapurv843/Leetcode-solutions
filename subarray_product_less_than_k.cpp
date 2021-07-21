class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]<k)
            {
                count++;
            }
            int a = nums[i];
            for(int j = i+1;j<nums.size();j++)
            {
                a = a*nums[j];
                if(a<k)
                {
                    count++;
                }
                else
                {
                    break;
                }

                
            }
        }
        return count;
    }
};