int  solve(Node *root,int x,int &count)
{
    if(root==NULL) return 0;
    int l= solve(root->left,x,count);
    int r = solve(root->right,x,count);
    if(l+r+root->data ==x) count++;
    return l+r+root->data;
    
}
int countSubtreesWithSumX(Node* root, int X)
{
	int count =0;
	 solve(root,X,count);
	return count;
}
