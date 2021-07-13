class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        vector<int> ans;
        int n = A.size();
        int carry = 0;
        int i = n-1;
        int curr = K;
        while(i>=0 or curr>0)
        
        {
            if(i>=0)
            {
                int k = A[i]+carry+(curr%10);
            ans.push_back(k%10);
            curr=curr/10;
            carry = (k)/10;
            i--;
            }
            
            
        }
        if(carry!=0)
        {
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};