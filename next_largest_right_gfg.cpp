vector <long long> nextLargerElement(long long arr[], int n){
    vector<long long int> v;
    stack<long long> s;
    for(auto i = n-1;i>=0;i--)
    {
        if(s.empty())
        {
            v.push_back(-1);
        }
        else if(!s.empty() && s.top()>arr[i])
        {
            v.push_back(s.top());
        }
        else if(!s.empty() && s.top()<=arr[i])
        {
            while(s.size()>0 && s.top()<=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}