#include<iostream>
#include<bits/stdc++.h>
int ad_mx[10005][10005];
using namespace std ;
int main()
{
    memset(ad_mx,0,sizeof(ad_mx));
    int n,m;
    int x,y;
    //n=node;
    //m = edges
    cin>>n>>m;
    for(int i = 0;i<m;i++)
    {
        cin>>x>>y;
        ad_mx[x][y]=1;
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cout<<ad_mx[i][j]<<" ";
        }
        cout<<endl;
    }

}