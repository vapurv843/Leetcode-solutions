#include<bits/stdc++.h>
using namespace std;

int leader(int arr[],int n)
{
    vector<int> v;
    v.push_back(arr[n-1]);
    int large = arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>=large)
        {
            large = arr[i];
            v.push_back(large);
        }
    }
    reverse(v.begin(),v.end());
    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        leader(arr,n);
        cout<<endl;
    }
}