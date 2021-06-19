#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> v={55,4,1,8,78,90,3,2};
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
}