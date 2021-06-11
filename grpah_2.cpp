#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> ll[n];
    for(int i  = 0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        ll[u].push_back(v);
        ll[v].push_back(u);
    }
}