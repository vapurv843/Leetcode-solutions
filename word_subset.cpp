class Solution {
public:
    vector<int> counter(string &s)
    {
        vector<int> freq(26);
        for(auto &x:s)
        {
            freq[x-'a']++;
        }
        return freq;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> max_freq(26);
        
        vector<string> ans;
        for(auto &x:words2)
        {
           vector<int> freq = counter(x);
            for(int i = 0;i<26;i++)
            {
                max_freq[i]= max(freq[i],max_freq[i]);
            }
            
        }
        for(auto &x:words1)
        {
            vector<int> freq1=counter(x);
            int i=0;
            for(i = 0;i<26;i++)
            {
                if(freq1[i]<max_freq[i])
                {
                    break;
                }
            }
            if(i==26)
            {
                ans.push_back(x);
            }
        }
        return ans;
        
    }
};