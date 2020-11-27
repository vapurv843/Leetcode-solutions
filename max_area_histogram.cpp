class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        stack<pair<int,int>> st;
        vector<int> left;
        vector<int> right;
        for(int i = 0;i<n;i++)
        {
            while(!st.empty() && st.top().first>=arr[i])
            {
                st.pop();
            }
            if(st.empty()) left.push_back(-1);
            else
            {
                left.push_back(st.top().second);
            }
            st.push({arr[i],i});
        }
        while(!st.empty())
        {
            st.pop();
        }
        for(int i = n-1;i>=0;i--)
        {
            while(!st.empty() && st.top().first>=arr[i])
            {
                st.pop();
            }
            if(st.empty()) right.push_back(n);
            else
            {
                right.push_back(st.top().second);
            }
            st.push({arr[i],i});
        }
        reverse(right.begin(),right.end());
        int ans = 0;
        for(int i = 0;i<n;i++)
        {
            ans = max(ans,(right[i]-left[i]-1)*arr[i]);
        }
        return ans;
        
    }
};