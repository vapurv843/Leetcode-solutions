class Solution {
public:
    int solve1(vector<int> arr,int start,int end,int target)
        {
            int mid = 0;
            int ans = -1;
            while(start<=end)
            {
                mid = start+(end-start)/2;
                if(arr[mid]==target)
                {
                    ans = mid;
                    end = mid-1;
                }
                else if(arr[mid]<target)
                {
                    start = mid+1;
                }
                else
                {
                    end = mid-1;
                }
               
            }
         return ans;
    }
        
        int solve2(vector<int> arr,int start,int end,int target)
        {
            int mid = 0;
            int ans = -1;
            while(start<=end)
            {
                mid = start+(end-start)/2;
                if(arr[mid]==target)
                {
                    ans = mid;
                    start = mid+1;
                }
                else if(arr[mid]<=target)
                {
                    start = mid+1;
                }
                else
                {
                    end = mid-1;
                }
               
            }
             return ans;
        }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int k = solve1(nums,start,end,target);
        int l = solve2(nums,start,end,target);
        return {k,l};
        
    }
};