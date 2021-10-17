class Solution {
public:
    void solve(vector<vector<int>> &ans,vector<int> &res,int n,int k,int i)
    {
        if(res.size()==k)
        {
            ans.push_back(res);
            return;
        }
        for(int index = i;index<n+1;index++ )
        {
            res.push_back(index);
            solve(ans,res,n,k,index+1);
            res.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> res ;
        solve(ans,res,n,k,1);
        return ans;
        
        
    }
};