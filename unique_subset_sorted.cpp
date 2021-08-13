class Solution
{
    void solve(vector<int> &arr,int i,int n,vector<int> &ans,set<vector<int>> &s )
    {
        if(i==n)
        {
            s.insert(ans);
            return ;
        }
        solve(arr,i+1,n,ans,s);
        ans.push_back(arr[i]);
        solve(arr,i+1,n,ans,s);
        ans.pop_back();
    }
    public:
    //Function to find all possible unique subsets.
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        // code here 
        sort(arr.begin(),arr.end());
        set<vector<int>> s;
        vector<int> ans;
        solve(arr,0,n,ans,s);
        vector<vector<int>> res;
        for(auto x:s)
        {
            res.push_back(x);
        }
        return res;
        
    }
};