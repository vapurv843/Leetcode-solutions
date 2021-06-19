#include<bits/stdc++.h>
using namespace std ;
class Node
{
    public:
    int data;
    Node *right,*left;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
bool find(Node *root,int data)
{
    vector<int> v;
    if(root==NULL) return false;
    if(root->data ==data )
    {
        v.push_back(root->data);
        return true;
    }
    bool l= find(root->left,data);
    if(l)
    {
        v.push_back(root->data);
        return true;
    }
    bool r = find(root->right,data);
    if(r)
    {
        v.push_back(root->data);
        return true;
    }
    return false;

    for(auto i:v)
    {
        cout<<i<<" ";
    }
}
int main()
{
    Node* root = new Node(10); 
    root->left = new Node(8); 
    root->right = new Node(2); 
    root->left->left = new Node(3); 
    root->left->right = new Node(5); 
    root->right->left = new Node(2); 
    //print(root);
    
     find(root,2);
    

    
    
    
}
