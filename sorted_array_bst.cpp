/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode* solve(const vector<int> &arr,int start,int end)
 {
     if(start>end) return NULL;
     int mid = (start+end)/2;
     TreeNode *root = new TreeNode(arr[mid]);
     root->left = solve(arr,start,mid-1);
     root->right = solve(arr,mid+1,end);
     return root;
 }
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    int start = 0;
    int end = A.size()-1;
    return solve(A,start,end);
    
    
}
