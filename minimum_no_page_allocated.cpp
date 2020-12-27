#include <bits/stdc++.h>
#define ll long long
#define NFS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

bool check(vector<int>&nums,int n,int m,int mid)
{
    int count=0,sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=nums[i];
        if(sum<=mid)   
            continue;
        else
        {
            i--;sum=0,count++;
        }
    }
    if(sum) count++;
    
    if(count<=m)    return true;
    else            return false;
    
}

int splitArray(vector<int>& nums, int m) {
    int n = nums.size();
    int s=0;
    for(auto it:nums)
        s+=it;
    int lo = *max_element(nums.begin(),nums.end());
    int hi = s;
    
    while(lo<hi)
    {
        int mid=lo+((hi-lo)/2);
        if(check(nums,n,m,mid))
            hi=mid;
        else
            lo=mid+1;
    }
    return lo;
}


int main()
{
NFS;
ll tc;cin>>tc;
while(tc--)
{
int k,n;cin>>k>>n;
vector<int>nums(n);
for(auto &it:nums)
    cin>>it;
cout<<splitArray(nums,k)<<"\n";
nums.clear();
}
return 0;
}