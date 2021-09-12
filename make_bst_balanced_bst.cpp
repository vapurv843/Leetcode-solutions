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
    
    TreeNode *build(vector<int> &res,int start,int end)
    {
        if(start>end)
        {
            return NULL;
        }
        int mid = (start + end) / 2;
        
        TreeNode *root = new TreeNode(res[mid]);
        root->left = build(res,start,mid-1);
        root->right = build(res,mid+1,end);
        return root;
       
    }
    void solve(TreeNode *root,vector<int> &res)
    {
        if(root==NULL) return ;
        solve(root->left,res);
        res.push_back(root->val);
        solve(root->right,res);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> res ;
        solve(root,res);
        return build(res,0,res.size()-1);
        
    }
};