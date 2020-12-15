int LISS(struct Node *root)
{
    if(root==NULL) return 0;
    int incl = 1;
    int excl = LISS(root->left)+LISS(root->right);
    if(root->right)
    {
        incl+=LISS(root->right->left)+LISS(root->right->right);
    }
    if(root->left)
    {
        incl+=LISS(root->left->left)+LISS(root->left->right);
    }
    return max(incl,excl);
}