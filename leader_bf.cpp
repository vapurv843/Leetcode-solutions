#include<iostream>
using namespace std;
int leader(int arr[],int n)
{
    int j;
    for(int i = 0;i<n;i++)
    {
        for( j = i+1;j<n;j++)
        {
            if(arr[i]<arr[j]) break;
        }
        if(j==n)
        {
            cout<<arr[i]<<" ";
        }
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