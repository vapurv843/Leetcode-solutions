class Solution {
public:
    string solve(string a,string b)
    {
        int m = a.length();
        int n= b.length();
        string res = "";
        for(int i =0,j=0;i<m and j<n;i++,j++)
        {
            if(a[i]!=b[j])
            {
                break;
            }
            res  +=a[i];
        }
        return res;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int n =strs.size();
        if(n==0) return "";
        string res = strs[0];
        for(int i = 1;i<n;i++)
        {
            res = solve(res ,strs[i]);
        }
        return res ;
        
    }
};