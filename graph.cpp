#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int mat[n+1][n+1];
    memset(mat,0,sizeof(mat));
    for(int i = 0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        mat[u][v]=1;
        mat[v][u]=1;

    }
    for(int i = 0;i<n+1;i++)
    {
        for(int j = 0;j<n+1;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    

}