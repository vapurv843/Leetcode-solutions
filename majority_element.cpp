class Solution {
public:
    int majorityElement(vector<int>& a) {
        sort(a.begin(),a.end());
        return a[a.size()/2];
        
    }
};