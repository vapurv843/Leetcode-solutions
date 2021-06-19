#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    if(n%11==0 or n%11==1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    long long n ;
    cin>>n;
    while(n--)
    {
        solve();

    }
}