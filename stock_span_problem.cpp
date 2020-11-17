#include<bits/stdc++.h>
using namespace std;
int span(int arr[],int n)
{
    stack<pair<int,int>> s;
    vector<int> v;
    for(int i = 0;i<n;i++)
    {
        if(s.empty())
        {
            v.push_back(-1);
        }
        else if(!s.empty() && s.top().first>arr[i])
        {
            v.push_back(s.top().second);
        }
        else if(!s.empty() && s.top().first<=arr[i])
        {
            while(s.size()>0 && s.top().first<=arr[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
    }
    for(int i = 0;i<n;i++)
    {
        v[i]= i-v[i];
    }
    for(auto i:v)
    {
        cout<<i<< " ";
    }
    
}
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        span(arr,n);
        cout<<endl;
    }
}