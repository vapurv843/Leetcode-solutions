#include<iostream>
using namespace std;
int mid(int arr[],int n)
{
    int left = 0;
    int right = 0;
    for(int i = 0;i<n;i++)
    {
        left = 0;
        for(int j = 0;j<i;j++)
        {
            left+=arr[j];
        }
        right = 0;
        for(int j = i+1;j<n;j++)
        {
            right+=arr[j];
        }
        if(left==right) 
            return i+1;
    }
    return -1;
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
        int k = mid(arr,n);
        cout<<k;
        cout<<endl;
    }
}