class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0) return 0;
        if(nums.size()==1 and nums[0]==val) return 0;
        for(int i = 0;i<nums.size();)
        {
            if(nums[i]==val)
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