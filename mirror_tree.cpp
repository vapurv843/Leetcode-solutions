void mirror(Node* root) 
{
     if(root==NULL) return;
     mirror(root->left);
     mirror(root->right);
     Node *temp=nullptr;
     temp = root->left;
     root->left = root->right;
     root->right = temp;
}