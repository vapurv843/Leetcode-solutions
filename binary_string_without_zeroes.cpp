#include<bits/stdc++.h>
using namespace std;
int decode(int n)
{
    int c0[n];
    int c1[n];
    
    c0[1]=1;
    c1[1]=1;
    for(int i = 2;i<n+1;i++)
    {
        c1[i]=c0[i-1]+c1[i-1];
        c0[i]=c1[i-1];
    }
    return c0[n]+c1[n];
    
}
int main()
{
    int n=6;
    //cin>>n;
    int count = decode(n);
    cout<<count;
}