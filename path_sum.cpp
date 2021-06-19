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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL) return 0;
        int rem_sum sum-root->data;
        if(rem_sum==0 and root->left == NULL and root->right==NULL)
        {
            return true;
        }
        return hasPathSum(root->left,rem_sum) or hasPathSum(root->left,rem_sum);
        )
        
        
    }
};