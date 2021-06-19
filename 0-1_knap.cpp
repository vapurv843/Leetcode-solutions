#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, vector<int> &B, int C) {
    int n=A.size();
int t[n+1][C+1];
// base case if(n==0 or C==0)return 0;
for(int i=0;i<n+1;i++)
{
    t[i][0]=0;
}
for(int j=0;j<C+1;j++)
{
    t[0][j]=0;
}
for(int i=1;i<n+1;i++)
{
    for(int j=1;j<C+1;j++)
    {
        if(B[i-1]<=j)
        {
            t[i][j]=max((A[i-1]+t[i-1][j-B[i-1]]),t[i-1][j]);
        }
        else
        {
            t[i][j]=t[i-1][j];
        }
    }
}
for(int i = 0;i<n+1;i++)
{
    for(int j = 0;j<C+1;j++)
    {
        cout<<t[i][j]<<" ";
    }
    cout<<endl;
}
}
int main()
{
    int w = 7;
    vector<int > val = {15,14,10,45,30};
    vector<int> wt = {2,5,1,3,4};
    solve(val,wt,w);
}

