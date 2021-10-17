#include<bits/stdc++.h>
using namespace std;
void solve(int begin, vector<int> nums,vector<int> ds,vector<vector<int>> &ans)
{
    if(begin>=nums.size())
    {
        ans.push_back(nums);
    }
    for(int i = begin;i<nums.size();i++)
    {
        swap(nums[begin],nums[i]);
        solve(begin+1,nums,ds,ans);
    }
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> ds;
    solve(0,nums,ds,ans);
    return ans;
    
}

int main(){
    vector<int> nums = {1,2,3};
    permute(nums);

}