class Solution {
public:
    int hs(vector<int> v,int n)
    {
        int mn = INT_MIN;
        int left_ind = -1;
        int right_ind = n+1;
        stack<pair<int,int>>s1;
        stack<pair<int,int>>s2;
        vector<int> right;
        vector<int> left;
        vector<int> w;
        vector<int> area;
        for(int i = 0;i<n;i++)
        {
            if(s1.empty())
            {
                left.push_back(left_ind);
            }
            else if(!s1.empty() && s1.top().first<v[i])
            {
                left.push_back(s1.top().second);
            }
            else if(!s1.empty() && s1.top().first>=v[i])
            {
                while(s1.size()>0 && s1.top().first>=v[i])
                {
                    s1.pop();
                }
                if(s1.size()==0)
                {
                    left.push_back(left_ind);
                }
                else
                {
                    left.push_back(s1.top().second);
                }
            }
            s1.push({v[i],i});
        }
        for(int i = n-1;i>0;i--)
        {
            if(s2.empty())
            {
                right.push_back(right_ind);
            }
            else if(!s2.empty() && s2.top().first>v[i])
            {
                right.push_back(s2.top().second);
            }
            else if(!s2.empty() && s2.top().first<=v[i])
            {
                while(s2.size()>0 && s2.top().first<=v[i])
                {
                    s2.pop();
                }
                if(s2.size()==0)
                {
                    right.push_back(right_ind);
                }
                else
                {
                    right.push_back(s2.top().second);
                }
            }
            s2.push({v[i],i});
        }
        for(int i = 0;i<n;i++)
        {
            w[i]=left[i]-right[i];
        }
        for(int i = 0;i<n;i++)
        {
            area[i]=w[i]*v[i];
        }
        
        for(int i = 0;i<n;i++)
        {
            mn = max(mn,area[i]);
        }
        return mn;
        
        
    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int k = hs(heights,n);
        return k;
        
    }
};