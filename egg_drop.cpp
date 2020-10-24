#include<bits/stdc++.h>
using namespace std;
int solve(int egg,int fl)
{
    if(egg == 1) return fl;
    
    if(fl == 1 || fl == 0) return fl;
    
    int mn = INT_MAX,temp;
    for(int i = 1;i<=fl;i++)
    {
         temp = max(solve(egg-1,i-1),solve(egg,fl-i));
        mn = min(mn,temp);
    }
    return mn+1;
}
int main()
{
    int egg=2;
    //cin>>egg;
    int fl=10;
    int np= solve(egg,fl);
    cout<<np<<endl;
}