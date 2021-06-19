#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int arr [] ={10,20,30,40};
    int n = sizeof(arr)/sizeof(int);
    int mx = INT_MIN;
    for(int i = 0;i<n;i++)
    {
        mx = max(mx,arr[i]);
    }
    cout<<mx;
}