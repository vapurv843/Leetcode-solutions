bool iso(string s)
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
bool isIsogram(string s)
{
    if(iso(s))
    {
        return true;
    }
    return false;
}