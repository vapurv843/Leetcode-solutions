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
    int solve(TreeNode *root,int depth)
    {
        if(root==NULL) return INT_MAX;
        if(root->left==NULL and root->right==NULL) return depth;
        int a = solve(root->left,depth+1);
        int b = solve(root->right,depth+1);
        return min(a,b);
    }
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int ans = solve(root,1);
        return ans ;
        
    }
};