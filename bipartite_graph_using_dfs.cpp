#include<bits/stdc++.h>
using namespace std;
bool ischeck(int i,vector<int> adj[],vector<int> &color)
{
    if(color[i]==-1)
    {
        color[i]=1;
    }
    for(auto x:adj[i])
    [
        if(color[x]==-1)
        {
            color[x]=1-color[i];
        }
    ]
}


bool check(vector<int> adj[],int V)
{
    vector<int> color(V,-1);
    for(int i = 0;i<V;i++)
    {
        if(color[i]==-1)
        {
            if(ischeck(i,adj,color)==false) return false;
        }

    }
    return true;

}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[];
    for(int i = 0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int k = check(adj,n);
    if(k)
    {
        cout<<"YES";
    }
    else{
        cout<<"NP";
    }
}