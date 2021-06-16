class Solution {
public:
    int solve(TreeNode *root,TreeNode *parent,TreeNode *grandparent)
    {
        int sum = 0;
        if(root==NULL) return 0;
        if(grandparent!=NULL and grandparent->val%2==0)
        {
            sum+=root->val;
        }
        sum+=solve(root->left,root,parent);
        sum+=solve(root->right,root,parent);
        return sum;
    }
    int sumEvenGrandparent(TreeNode* root) {
        return solve(root,NULL,NULL);
        
    }
};