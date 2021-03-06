#include<bits/stdc++.h>
using namespace std ;
vector<int> solve(vector<int> v,int n,int target)
{
    vector<int> ans;
    unordered_map<int,int> mp;
    for(int i = 0;i<n;i++)
    {
        if(mp.find(target-v[i])!=mp.end())
        {
            ans.push_back(i);
            ans.push_back(target-v[i]);
            return ans;
        }
        else
        {
            mp[v[i]]=i;
        }
        
    }
    return ans;
}
int main()
{
    int n ;
    cin>>n;
    vector<int> v(n,0);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }
    int target ;
    cin>>target;
    vector<int> res = solve(v,n,target);
    for(auto x:res)
    {
        cout<<x<<" ";
    }
}