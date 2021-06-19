#include<bits/stdc++.h>
using namespace std ;
bool checkforcycle(int node,int parent,vector<bool> &vis,vector<int> &adj[])
{
    vis[node]=1;
    for(auto x:adj[node])
    {
        if(vis[x]==0)
        {
            if(checkforcycle(x,node,vis,adj)) return true;
        }
        else if(x!=parent) return true;
    }
    return false; 
}
bool check(int V,vector<int> adj[])
{
    vector<int> vis(V,0);

    for(int i = 0;i<V;i++)
    {
        if(vis[i]==0)
        {
            if(checkforcycle(i,-1,vis,adj)) return true;
        }

    }
    return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n];
    for(int i = 0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool ans = check(n,adj);
    cout<<ans<<endl;

}