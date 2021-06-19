#include<bits/stdc++.h>
using namespace std ;
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
void solve(vector<string> v,int n)
{
    int count = 0;
    vector<pair<string,int>> mp;
    for(int i = 0;i<n;i++)
    {
        for(int j = 1;j<n;j++)
        {
            if(v[i]==v[j])
            {
                count++;
                mp.push_back(make_pair(v[i],count));
            }
        }
    }
    sort(mp.begin(),mp.end(),sortbysec);
    for(int i = 0;i<n;i++)
    {
        cout<<mp[i].first<<" ";
    }
}
int main()
{
    vector<string> v={"geeks","for","geeks"};
    int n = v.size();
    solve(v,n);
}