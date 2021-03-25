#include<bits/stdc++.h>
using namespace std ;
int solve(vector<int> v,int n)
{
    int j = 0;
    for(int i = 0;i<n-1;i++)
    {
        if(v[i]!=v[i+1])
        {
            v[j++]=v[i];
        }
    }
    v[j++]=v[n-1];
    return j;
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
    int n = solve(v,n);
    cout<<n<<endl;

}