#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node;
    cin>>node;
    int edges;
    cin>>edges;
    int arr[node][node];
    memset(arr,0,sizeof(arr));
    int x,y;
    for(int i = 1;i<=edges;i++)
    {
        cin>>x>>y;
        arr[x][y]=1;
    }
    for(int i = 1;i<=node;i++)
    {
        for(int j = 1;j<=node;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}