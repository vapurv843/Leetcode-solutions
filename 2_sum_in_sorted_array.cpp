class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        int i = 0;
        int j = a.size()-1;
        vector<int> ans;
        while(i<j)
        {
            if(a[i]+a[j]>t)
            {
                j--;
            }
            else if(a[i]+a[j]<t)
            {
                i++;
            }
            else
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            
        }
        return ans;
        
    }
};