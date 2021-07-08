class Solution {
public:
    string shortestPalindrome(string s) {
        string k = s;
        int n = s.length();
        reverse(k.begin(),k.end());
        for(int i = 0;i<s.length();i++)
        {
            if(s.substr(0,n-i)==k.substr(i))
            {
                return k.substr(0,i)+s;
            }
        }
        return "";
        
    }
};