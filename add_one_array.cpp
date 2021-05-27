#include<bits/stdc++.h>
using namespace std ;
void solve(vector<int> v,int n)
{
     vector<int> ans ;
    int sum = v[n-1]+1;
    int mod = sum/10;
    ans.push_back(sum%10);
    for(int i = n-2;i>=0;i--)
    {
        sum = v[i]+mod;
        mod = sum/10;
        ans.push_back(sum%10);
    }
    if(mod!=0)
    {
        ans.push_back(mod);
    }
    reverse(ans.begin(),ans.end());
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
   
}
int main()
{
    vector<int> v={1,2,3,9};
    int n = v.size();
    solve(v,n);

}