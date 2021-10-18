/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode *root,vector<vector<int>> &ans,vector<int> &ds,int sum)
    {
       if(root == NULL)
       {
           return ;
       }
        ds.push_back(root->val);
        if(root->left == NULL and root->right == NULL and sum == root->val)
        {
            ans.push_back(ds);
            
        }
        solve(root->left,ans,ds,sum-root->val);
        solve(root->right,ans,ds,sum-root->val);
        ds.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       
        vector<vector<int>> ans;
        vector<int> ds;
         
        solve(root,ans,ds,targetSum);
        return ans;
        
        
    }
};