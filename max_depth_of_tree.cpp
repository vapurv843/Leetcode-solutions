/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int solve(TreeNode *A)
 {
     if(A==NULL) return 0;
     int right = solve(A->left);
     int left = solve(A->right);
     return max(left,right)+1;
 }
int Solution::maxDepth(TreeNode* A) {
    int height = solve(A);
    return height;
}
