Node *bst(int arr[],int low,int high)
{
    if(low>high) return NULL;
    int mid = low+(high-low)/2;
    Node *root= new Node(arr[mid]);
    root->left = bst(arr,low,mid-1);
    root->right = bst(arr,mid+1,high);
    return root;
}
Node *constructTree (int arr[], int size)
{
    sort(arr,arr+size);
    return bst(arr,0,size-1);
}