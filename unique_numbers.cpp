class Solution
{
public:
bool dd(string   s)
{
    unordered_map<char,int> mp;
    for(int i = 0;i<s.length();i++)
    {
        mp[s[i]]++;
    }
    for(auto k:mp)
    {
        if(k.second>1)
        {
            return false;
        }
    }
    return true;
    
    
}
    vector<int> uniqueNumbers(int L,int R)
    {
        vector<int> v;
        for(int i = L;i<=R;i++)
        {
            if(dd(to_string(i)))
            {
                v.push_back(i);
            }
        }
        return v;
    }
};