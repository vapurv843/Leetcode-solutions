class Solution
{
    void dfs(int i,vector<bool> &vis,stack<int> &s,vector<int> adj[])
	{
	    vis[i]=1;
	    for(auto x:adj[i])
	    {
	        if(vis[x]==0)
	        {
	            dfs(x,vis,s,adj);
	        }
	    }
	    s.push(i);
	}
	public:
	//Function to return list containing vertices in Topological order. 
	
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    stack<int> s;
	    vector<int> ans;
	    vector<bool> vis(V,0);
	    for(int i = 0;i<V;i++)
	    {
	        if(vis[i]==0)
	        {
	            dfs(i,vis,s,adj);
	        }
	    }
	    while(!s.empty())
	    {
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	}
};