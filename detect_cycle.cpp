class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    bool detectcycle(int n,vector<bool> &vis,vector<int> adj[])
    {
        queue<pair<int,int>> q;
        q.push({n,-1});
        vis[n]=1;
        while(q.empty()==false)
        {
            int par = q.front().second;
            int node =  q.front().first;
            q.pop();
            for(auto it:adj[node])
            {
                if(vis[it]==false)
                {
                    vis[it]=1;
                    q.push({it,node});
                }
                else if(par!=it)
                {
                    
                        return true;
                   
                }
            }
        }
        return false;
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    vector<bool> vis(V,0);
	    for(int i = 0;i<V;i++)
	    {
	        if(vis[i]==0)
	        {
	            if(detectcycle(i,vis,adj))
	            {
	                return true;
	            }
	        }
	    }
	    return false;
	    
	}
};