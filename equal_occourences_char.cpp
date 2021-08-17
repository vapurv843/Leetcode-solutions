class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;
        for(int i = 0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        int count = mp[s[0]];
        for(auto x:mp)
        {
            if(count!=x.second)
            {
                return false;
            }
        }
        return true;
        
    }
};