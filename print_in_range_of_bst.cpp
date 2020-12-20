int getCount(Node *root, int low, int high)
{
  if (!root) return 0; 
  
    
    if (root->data == high && root->data == low) 
        return 1; 
  
    
    if (root->data <= high && root->data >= low) 
         return 1 + getCount(root->left, low, high) + 
                    getCount(root->right, low, high); 

    else if (root->data < low) 
         return getCount(root->right, low, high); 
  
    
    else return getCount(root->left, low, high); 
}