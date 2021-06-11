#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> ll[n];
    for(int i  = 0;i<m;i++)
    {
        int u,v,wt;
        cin>>u>>v,wt;
        ll[u].push_back({v,wt});
        ll[v].push_back({u,wt});
    }
}