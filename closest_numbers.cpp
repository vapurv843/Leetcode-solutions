class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<long long ,long long>> p;
        int n = arr.size();
        vector<int> v;
        for(int i = 0;i<n;i++)
        {
            p.push(make_pair(abs(arr[i]-x),arr[i]));
            if(p.size()>k) p.pop();
        }
        while(p.size()>0)
        {
           v.push_back(p.top().second); 
            p.pop();
        }
        sort(v.begin(),v.end());
        return v;
        
    }
};