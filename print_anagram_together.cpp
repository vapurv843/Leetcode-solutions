vector<vector<string> > Anagrams(vector<string>& strings) 
{   
    unordered_map<string,int> umap;
     unordered_map<string,vector<string>> ans;
    for(int i=0;i<strings.size();i++)
    {
        string s=strings[i];
        sort(s.begin(),s.end());
        if(umap.find(s)!=umap.end())
        {
            
            ans[s].push_back(strings[i]);
        }
        else
        {
            umap[s]++;
            ans[s].push_back(strings[i]);
        }
    }
    
    
    vector<vector<string>> ans1;
    for(auto x:ans)
    {
        ans1.push_back(x.second);
    }
    return ans1;    


}