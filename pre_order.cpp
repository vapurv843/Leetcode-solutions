void print(Node *root,vector<int> &v)
{
    if(root)
    {
        v.push_back(root->data);
        print(root->left,v);
        print(root->right,v);
    }
    return ;
}

vector <int> preorder(Node* root)
{
  vector<int> v;
  print(root,v);
  return v;
    
    
    
}