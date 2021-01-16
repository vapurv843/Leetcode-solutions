bool isHeap(Node *root)
{
    queue<Node * > q;
    q.push(root);
    
    while(!q.empty())
    {
        int size = q.size();
        
        for(int i = 0; i < size; i++)
        {
            Node *curr = q.front();
            
            if(curr->left != NULL)
            {
                if(curr->left->data > curr->data)
                {
                    return false;
                }
                
                q.push(curr->left);
            }
            
            if(curr->right != NULL)
            {
                if(curr->right->data > curr->data)
                {
                    return false;
                }
                
                q.push(curr->right);
            }
            
            q.pop();
        }
    }
    return true;
}