vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> ans(n);
        stack<long long> st;
        for(int i = n-1;i>=0;i--)
        {
            if(!st.empty())
            {
                while(!st.empty() and st.top()<=arr[i])
                {
                    st.pop();
                }
                
            }
            ans[i] = st.empty()?-1:st.top();
            st.push(arr[i]);
        }
        return ans;
    }
