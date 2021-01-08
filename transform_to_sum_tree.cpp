int solve(Node *root)
{
    if(root==NULL) return 0;
    
    int k = root->data;
    int ls = solve(root->left);
    int rs = solve(root->right);
    root->data = ls+rs;
    return k+root->data;
    
}
void toSumTree(Node *node)
{
    solve(node);
}
