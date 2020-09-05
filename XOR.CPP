#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int xormin(int arr[],int size)
{
    int m1 = INT_MAX;
    for(int i = 0;i<size-1;i++)
    {
        int val = arr[i]^arr[i+1];
        m1 = min(m1,val);
    }
    return m1;
}
int main()
{
    int arr[] = {9, 5, 3,9,1,2,33,445,6};
    int  n = sizeof(arr)/sizeof(int);
    cout<<xormin(arr,n);
}
