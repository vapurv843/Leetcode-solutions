#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> v,int n )
{
    int area = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            area =max (area,min(v[i],v[j])*(j-i));
        }
    }
    return area;
}
int main()
{ 
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }
    int k  = solve(v,n);
    cout<<k<<endl;
}