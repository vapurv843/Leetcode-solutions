class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        int count = 0;
       for(string &s :arr)
       {
           mp[s]++;
       }
        for(string &s : arr)
        {
            if(mp[s]==1)
            {
                count++;
            }
            if(count == k)
            {
                return s;
            }
            
        }
        return "";
        
    }
};