class Solution {
public:
    void solve( vector<vector<int>> &ans,vector<int> &ds,int n,int k,int index)
    {
        if(n < 0 || ds.size() > k) return;
        if(n == 0 and ds.size()==k)
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i = index;i<=9;i++)
        {
            ds.push_back(i);
            solve(ans,ds,n-i,k,i+1);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        
        vector<vector<int>> ans;
        vector<int> ds;
        solve(ans,ds,n,k,1);
        return ans;
    }
};