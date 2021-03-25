class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0 or nums.size()==1)
        {
            return nums.size();
        }
        for(int i = 0;i<nums.size()-1;)
        {
            if(nums[i]==nums[i+1])
            {
                nums.erase(nums.begin()+i);
            }
            else
            {
                i++;
            }
        }
        return nums.size();
        
    }
};