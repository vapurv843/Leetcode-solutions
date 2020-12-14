int getMaxSum(Node *root) 
{
    if(!root) return 0;

int excl=getMaxSum(root->left)+getMaxSum(root->right);
int incl=root->data;

if(root->left)
incl+=getMaxSum(root->left->left)+getMaxSum(root->left->right);
if(root->right)
incl+=getMaxSum(root->right->left)+getMaxSum(root->right->right);

return max(incl,excl);
}