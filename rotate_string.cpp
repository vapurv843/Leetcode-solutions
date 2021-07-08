class Solution {
public:
    bool rotateString(string s, string goal) {
        string res = s+s;
        if(s.length()==goal.length() and (res.find(goal)!=string ::npos)) return true;
        return false;
        
    }
};