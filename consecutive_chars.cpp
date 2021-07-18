class Solution {
public:
    int maxPower(string s) {
        int count = 1;
        int res =INT_MIN;
        for(int i = 0;i<s.length();i++)
        {
            if(i<s.length() and s[i]==s[i+1])
            {
                count++;
            }
            else
            {
                res = max(count,res);
                count = 1;
            }
        }
        return res;
        
    }
};c