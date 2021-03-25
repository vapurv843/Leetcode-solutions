class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         int left = 0;
    int right = nums.size()-1;
    
    while(left < right) {
        
        if(nums[left] == val && nums[right] != val) {
            swap(nums[left], nums[right]);
            left++; right--;
        } else if(nums[left] == val) {
            right--;
        } else {
            left++;
        }
        
    }
    
   auto it = find(nums.begin(), nums.end(), val);
    
   return ( it - nums.begin() );
        
    }
};