int countPairs(vector<int> a, int k) {
    int count = 0;
    int n = a.size();
    unordered_map<int,int> mp1;
    unordered_map<int,int> mp2;
    for(int i = 0;i<n;i++)
    {
        mp1[a[i]]++;
    }
    for(int i = 0;i<n;i++)
    {
        mp2[a[i]+k]++;
    }
    for(auto x : mp2)
    {
        if(mp1.find(x.first)!=mp1.end())
        {
            count++;
        }
    }
    return count;