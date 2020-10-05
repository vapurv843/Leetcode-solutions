#include<bits/stdc++.h>
using namespace std;
int small(int arr[],int n,int k)
{
    priority_queue<int> p;
    for(int i = 0;i<n;i++)
    {
        p.push(arr[i]);
        if(p.size()>k)
        {
           p.pop();
        }
    }
    return p.top();
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k=3;
    int j = small(arr,n,k);
    cout<<j;
}