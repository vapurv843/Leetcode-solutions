int height(Node *root)
{
    if(root==NULL) return 0;
    int j= height(root->left);
    int k = height(root->right);
    int l = max(j,k);
    return l+1;
}
void level(Node *root,int i,vector<int> &v)
{
    if(root==NULL) return ;
    if(i==1) v.push_back(root->data);
    level(root->left,i-1,v);
    level(root->right,i-1,v);
    
    
}
vector<int> levelOrder(Node* root)
{
  int h = height(root);
  vector<int> v;
  for(int i = 1;i<=h;i++)
  {
      level(root,i,v);
  }
  return  v;
}