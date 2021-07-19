class Solution {
public:
    double average(vector<int>& s) {
        int mx=INT_MIN;
        int mn = INT_MAX;
        int sum = 0;
        for(int i = 0;i<s.size();i++)
        {
            mx = max(mx,s[i]);
            mn = min(mn,s[i]);
            sum+=s[i];
        }
        int avg = sum-(mx+mn);
        return (double)avg/(s.size()-2);
        
        
    }
};