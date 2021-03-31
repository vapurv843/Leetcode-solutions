#include<bits/stdc++.h>
using namespace std ;
vector<int> solve(vector<int> &v)
{
    vector<int> res;
    int n = v.size();
    int num = v[n-1]+1;
    res.push_back(num%10);
    int mod = num/10;
    for(int i = n-2;i>=0;i--)
    {
        num = v[i]+mod;
        res.push_back(num%10);
        mod = num/10;
    }
    if(mod>0)
    {

        res.push_back(mod);
    }
    reverse(res.begin(),res.end());
    return res;

}
int main()
{
    vector<int> v = {1,2,3};
    vector<int> ans = solve(v);
    for(auto i :ans)
    {
        cout<<i<<" ";
    }
}