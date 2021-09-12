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
    vector<TreeNode*> res ;
    TreeNode *build(int start,int end)
    {
        if(start>end)
        {
            return NULL;
        }
        int mid = (start + end) / 2;
        
        TreeNode *root = res[mid];
        root->left = build(start,mid-1);
        root->right = build(mid+1,end);
        return root;
       
    }
    void solve(TreeNode *root)
    {
        if(root==NULL) return ;
        solve(root->left);
        res.push_back(root);
        solve(root->right);
    }
    TreeNode* balanceBST(TreeNode* root) {
        //vector<int> res ;
        solve(root);
        return build(0,res.size()-1);
        
    }
};