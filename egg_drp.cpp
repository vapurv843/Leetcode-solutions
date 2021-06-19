#include<bits/stdc++.h>
using namespace std ;
int solve(int floor,int egg)
{
    
    if(egg==1 ) return floor;
    if(floor==1 || floor ==0) return floor;
    
    int mn = INT_MAX;
    int temp=0;
    for(int i = 1;i<=floor;i++)
    {
         temp = max(solve(i-1,egg-1),solve(floor-i,egg));
        mn = min(mn,temp);
    }
    return mn+1;
}
int main()
{
    int floor =10;
    //cin>>floor;
    int egg=2;
    //cin>>egg;
    int k = solve(floor,egg);
    cout<<k<<endl;
}