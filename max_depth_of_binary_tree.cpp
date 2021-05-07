class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int lft = maxDepth(root->left);
        int rit = maxDepth(root->right);
        int k = max(lft,rit)+1;
        return k;
        
    }
};