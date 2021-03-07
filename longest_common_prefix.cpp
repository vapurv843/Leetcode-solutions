class Solution {
public:
    string solve(string a ,string b)
    {
        string result;
        int m = a.length();
        int n = b.length();
        for(int i = 0,j=0;i<=m-1 and j<=n-1;i++,j++)
        {
            if(a[i]!=b[j])
            {
                break;
            }
            else
            {
                result.push_back(a[i]);
            }
        }
        return result;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==0) return "";
        string ans = strs[0];
        for(int i = 1;i<=n-1;i++)
        {
            ans = solve(ans ,strs[i]);
        }
        return ans;
        
    }
};