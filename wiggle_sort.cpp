class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> temp(nums);
        sort(temp.begin(),temp.end());
        for(int i = nums.size()-1,j=0,k=i/2+1;i>=0;i--)
        {
            if(i%2)
            {
                nums[i]=temp[k++];
            }
            else
            {
                nums[i]=temp[j++];
            }
        }
        
    }
};