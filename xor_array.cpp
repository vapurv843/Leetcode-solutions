class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = 0;
        vector<int> v;
        for(int i = 0;i<n;i++)
        {
            int k = start+2*i;
            ans = ans^k;
            
        }
        return ans;
        
    }
};