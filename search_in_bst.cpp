#include<bits/stdc++.h>
using namespace std ;
class Node
{
    public:
    int data;
    Node *left,*right;
    Node(int data)
    {
        this->data=data;
        this->right = NULL;
        this->left = NULL;
    }
};
bool search(Node *root,int key)
{
    if(root==NULL) return false;
    if(root->data ==key)
    {
        return true;
    }
    if(root->data>key)
    {
        bool k = search(root->left,key);
        if(k) return true;
    }
    else if(root->data<key)
    {
        bool l = search(root->right,key);
        if(l) return true;
    }
    return false;
    
    
}

int main()
{
     Node* root = new Node(0);
    root->left = new Node(1);
    root->left->left = new Node(3);
    root->left->left->left = new Node(7);
    root->left->right = new Node(4);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);
    root->right = new Node(2);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    int key = 990;
    if(search(root,key))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"No";
    }
    
}