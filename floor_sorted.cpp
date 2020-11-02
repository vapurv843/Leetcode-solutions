#include<iostream>
using namespace std;
int flr(int arr[],int n,int ele)
{
    int start = 0;
    int end  = n-1;
    int res = 0;
    int mid = 0;
    if(arr[0]>ele) return -1;
    while(start<end)
    {
        mid = (start+end)/2;
        if(arr[mid+1]>ele && arr[mid]<=ele)
        {
            return mid;
        }
        else if(arr[mid+1]<=ele)
        {
            start = mid+1;
        }
        else if(arr[mid]>ele)
        {
            end = mid-1;
        }
    }
    return start;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
    cin>>n;
    int ele;
    cin>>ele;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k = flr(arr,n,ele);
    cout<<k<<endl;
    }
    
}