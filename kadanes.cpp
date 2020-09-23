#include<bits/stdc++.h>
using namespace std;
int maxsum(int arr[],int n)
{
    int sum=arr[0];
    int best = arr[0];
    for(int i = 1;i<n;i++)
    {
        sum = max(arr[i],sum+arr[i]);
        best = max(best,sum);
    }
    return best;
}
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i =  0;i<n;i++)
        {
            cin>>arr[i];
        }
        int k = maxsum(arr,n);
        cout<<k<<endl;
    }
}