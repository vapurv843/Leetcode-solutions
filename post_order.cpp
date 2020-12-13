void print(Node *root,vector<int> &v)
{
    if(root==NULL) return ;
    print(root->left,v);
    print(root->right,v);
    v.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
    vector<int> v;
    print(root,v);
    return v;
}
