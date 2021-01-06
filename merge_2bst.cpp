void createArray(Node *root, vector<int> &arr)
{
    if(root)
    {
        createArray(root->left, arr);
        
        arr.push_back(root->data);
        
        createArray(root->right, arr);
    }
}

vector<int> merge(Node *root1, Node *root2)
{
   //Your code here
   vector<int> arr1;
    createArray(root1, arr1);
    
    vector<int> arr2;
    createArray(root2, arr2);
    
    vector<int> arr3(arr1.size() + arr2.size());
    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr3.begin());
    
    return arr3;
}