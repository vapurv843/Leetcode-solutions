#include<bits/stdc++.h>
#include<vector>
vector<int> v[100];
using namespace std ;
int main()
{
    
    int m,n,x,y;
    cin>>m>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
    }
    for(int i = 0;i<n;i++)
    {
        cout<<i<<" ->"<<" ";
        for(int j = 0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
    }
}