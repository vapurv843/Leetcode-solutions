int largestRectangleArea(vector<int> &A) {
    if(A.size() == 1) return A[0];
    int n= A.size();
    vector<int> left;
    vector<int> right ;
    stack<pair<int,int>> st;
    for(int i = 0;i<n;i++)
    {
        while(!st.empty() && st.top().first>=A[i])
        {
            st.pop();
        }
        if(st.empty()) left.push_back(-1);
        else
        {
            left.push_back(st.top().second);
        }
        st.push({A[i],i});
    }
    while(!st.empty()) st.pop();
    for(int i = n-1;i>=0;i--)
    {
        while(!st.empty() && st.top().first>=A[i])
        {
            st.pop();
        }
        if(st.empty()) left.push_back(n);
        else
        {
            right.push_back(st.top().second);
        }
        st.push({A[i],i});
    }

    int ans = 0;
    reverse(right.begin(),right.end());
    for(int i = 0;i<n;i++){
        ans = max(ans,(right[i]-left[i]-1)*A[i]);
    }
    return ans;
}


int Solution::maximalRectangle(vector<vector<int> > &matrix) {
    int n = matrix.size();
        int m = matrix[0].size();
        vector<int > v;
        
        for(int j = 0;j<m;j++)
        {
            v.push_back(matrix[0][j]);
        }
        int mx = largestRectangleArea(v);
        
        for(int i = 1;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(matrix[i][j]==0)
                    v[j]=0;
                else
                    v[j]+=matrix[i][j];
            }
        }
        mx = max(mx,largestRectangleArea(v));
        return mx;
    
}
