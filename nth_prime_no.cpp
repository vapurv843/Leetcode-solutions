#include<bits/stdc++.h>
using namespace std ;
#define N 1000005
int main()
{
    vector<bool> vis(N,true);
    vis[0]=0;
    vis[1]=0;
    for(int i = 2;i<sqrt(N);i++)
    {
        if(vis[i])
        {
            for(int j = i*i;j<N;j+=i)
            {
                vis[j]=false;
            }
        }
    }
    vector<int> ans;
    for(int i = 0;i<N;i++)
    {
        if(vis[i])
        {
            ans.push_back(i);
        }
    }
    cout<<ans[4]<<endl;
    
}