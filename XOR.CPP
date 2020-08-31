#include<bits/stdc++.h>
using namespace std;
int xormin(int arr[],int n)
{
    int m1 = INT_MAX;
    for(int i = 0;i<n-1;i++)
    {
        int val = arr[i]^arr[i+1];
        m1 = min(m1,val);
    }
    return m1;
}
int main()
{
    int arr[] = {9, 5, 3,9};
    int  n = sizeof(arr)/sizeof(int);
    cout<<xormin(arr,n);
}