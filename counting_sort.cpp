#include<bits/stdc++.h>
using namespace std ;
void cs(vector<int> v ,int n)
{
    map<int,int> mp;
    for(int i = 0;i<n;i++)
    {
        mp[v[i]]++;
    }
    int i = 0;
    for(auto it :mp)
    {
        while(it.second--)
        {
            v[i++]=it.first;
        }
    }
    for(auto i :v)
    {
        cout<<i<<" ";
    }
}
int main()
{
     vector<int> v = {4, 2, 40, 10, 10, 1, 4, 2, 1, 10, 40 };
    int n = v.size();
    cs(v,n);

}