/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void solve(TreeNode *root,vector<int> &ans)
 {
     if(root==NULL) return ;
     solve(root->left,ans);
     ans.push_back(root->val);
     solve(root->right,ans);
 }
int Solution::t2Sum(TreeNode* A, int B) {
   vector<int> ans;
   solve(A,ans);
   int start = 0;
   int end = ans.size()-1;
   while(start<end)
   {
       if(ans[start]+ans[end]<B)
       {
           start++;
       }
       else if(ans[start]+ans[end]>B)
       {
           end--;
       }
      
       else
       {
           return 1;
       }
       
   }
   return 0;
   
   
}
