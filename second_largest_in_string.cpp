class Solution {
public:
    int secondHighest(string s) {
        vector<int> ans(2,-1); 
        for(int i = 0;i<s.length();i++)
        {
            if(isdigit(s[i]))
            {
                if(s[i]-'0'>ans[0])
                {
                    ans[1] = ans[0];
                    ans[0] = s[i]-'0';
                }
                else if(s[i]-'0' !=ans[0] and s[i]-'0'>ans[1])
                {
                    ans[1] = s[i] - '0';
                }
            }
        }
        return ans[1];
    }
};