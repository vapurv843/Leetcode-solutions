class Solution{
    public:
    void solve(vector<vector<int>> &m,int n,int i,int j,string res,vector<string> &ans)
    {
        
        if(i== n-1 and j==n-1)
        {
            ans.push_back(res);
            return ;
        }
        if(i>=0 && j>=0 && i<n and j<n and m[i][j])
        {
            m[i][j]=0;
            solve(m,n,i+1,j,res+"D",ans);
            solve(m,n,i,j-1,res+"L",ans);
            solve(m,n,i,j+1,res+"R",ans);
            solve(m,n,i-1,j,res+"U",ans);
            m[i][j]=1;
            
        }
        
        return ;
        
        
        
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        string res;
        vector<string> ans;
        if(m[0][0]==0 or m[n-1][n-1]==0)
        {
            return ans;
        }
        solve(m,n,0,0,res,ans);
        return ans;
        
        // Your code goes here
    }
};