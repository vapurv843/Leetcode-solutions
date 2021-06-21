#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr,int n)
{
    for(int i = 0;i<n-1;i++)
    {
        for(int j = 0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    vector<int> v = {32,1,5,4,22,90,8,0,2};
    int n = v.size();
    solve(v,n);
    for(auto x:v)
    {
        cout<<x<<" ";
    }
}