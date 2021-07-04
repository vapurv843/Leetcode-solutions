#include<bits/stdc++.h>
using namespace std;
void solve(int index,vector<vector<int>> &ans,vector<int> &ds,vector<int> &nums,int target )
    {
        if(index==nums.size())
        {
            if(target==0)
            {
               
                ans.push_back(ds);
            }
            return;
        }
        if(nums[index]<=target)
        {
            
            ds.push_back(nums[index]);
            
            solve(index,ans,ds,nums,target-nums[index]);
            ds.pop_back();
        }
        solve(index+1,ans,ds,nums,target);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0,ans,ds,nums,target);
        return ans;
    }
int main()
{
    vector<int> v = {2,3,6,7};
    int target = 7;
    vector<vector<int>> ans = combinationSum(v,target);
    for (vector<int> vect1D : ans)
    {
        for (int x : vect1D)
        {
            cout << x << " ";
        }   
        cout << endl;
    }
}