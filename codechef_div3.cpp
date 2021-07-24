#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int r1,w1,c1,r2,w2,c2;
    cin>>r1>>w1>>c1;
    //int r2,w2,c2;
    cin>>r2>>w2>>c2;
    int count1=0;
    int count2 = 0;
    if(r1>r2)
    {
        count1++;
    }
    else{
        count2++;
    }
    if(w1>w2)
    {
        count1++;
    }
    else{
        count2++;
    }
    if(c1>c2)
    {
        count1++;
    }
    else{
        count2++;
    }
    if(count1>count2)
    {
        cout<<"A"<<endl;
    }
    else{
        cout<<"B"<<endl;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
}