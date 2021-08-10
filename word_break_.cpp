class Solution {
public:
    bool wordBreak(string s, vector<string>& w) {
        if(find(w.begin(),w.end(),s) !=w.end())
        {
            return true;
        }
        for(int i = 1;i<s.length();i++)
        {
            if((find(w.begin(), w.end(), s.substr(0,i)) != w.end()) and wordBreak(s.substr(i),w) )
               {
                   return true;
               }
        }
               return false;
               
        
    }
};