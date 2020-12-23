void createArr(Node *root,vector<int> &v)
{
    if(root==NULL) return ;
    createArr(root->left,v);
    v.push_back(root->data);
    createArr(root->right,v);
}
Node *bst(vector<int> v,int low,int high)
{
    if(low>high) return NULL;
    int mid = low+(high-low)/2;
    Node *root = new Node(v[mid]);
    root->left = bst(v,low,mid-1);
    root->right = bst(v,mid+1,high);
    return root;
}
Node* buildBalancedTree(Node* root)
{
	vector<int>v;
	createArr(root,v);
	return bst(v,0,v.size()-1);
	
}
