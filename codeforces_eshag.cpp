#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long count_min = 0;
    for(int i =0;i<n;i++)
    {
        if(v[0]==v[i])
        {
            count_min++;
        }
    }
    cout<<n-count_min<<endl;
}
int main()
{
    long long n;
    cin>>n;
    while(n--)
    {
        solve();
    }
}