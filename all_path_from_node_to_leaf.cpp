#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
    int data;
    Node *left,*right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void printval(vector<int> &a)
{
    for(auto i :a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int  print_n_l(Node *root,vector<int> &v)
{
    if(root==NULL) return false;
    v.push_back(root->data);
    if(root->left == NULL and root->right==NULL)
    {
        printval(v);
    }
    else
    {
        /* code */
        print_n_l(root->right,v);
    print_n_l(root->left,v);
    }
    
    

}
void print(Node *root)
{
    vector<int> v;
    print_n_l(root,v);

}

int main()
{
    Node *root = new Node(1); 
    root->left = new Node(2); 
    root->right = new Node(3); 
    root->left->left = new Node(4); 
    root->left->right = new Node(5); 
    root->right->left = new Node(6); 
    root->right->right = new Node(7); 
    print(root);
}
