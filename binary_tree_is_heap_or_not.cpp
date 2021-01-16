void solve(Node *root,priority_queue<int> &pq)
{
    if(root==NULL) return ;
    pq.push(root->data);
    solve(root->left,pq);
    solve(root->right,pq);
    
}
bool isHeap(Node * tree)
{
    priority_queue<int> pq;
    solve(tree,pq);
    if(pq.top()==tree->data)
    {
        return true;
    }
    return false;
}