class Solution {
public:
    unordered_map<string,bool> mp;
    bool wordBreak(string s, vector<string>& w) {
        //unordered_map<string,bool> mp;
        if(find(w.begin(),w.end(),s) !=w.end())
        {
            return true;
        }
        if(mp.find(s)!=mp.end())
        {
            return mp[s];
        }
        for(int i = 1;i<=s.length();i++)
        {
            string left = s.substr(0,i);
             if((find(w.begin(), w.end(), left) != w.end()) and wordBreak(s.substr(i),w) )
               {
                mp[{s,true}];
                   return true;
               }
        }
         mp[{s,false}];
               return false;
               
        
    }
};