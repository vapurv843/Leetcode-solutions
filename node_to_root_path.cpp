#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *right,*left;
    Node(int data)
    {
        this->data = data;
        this->left=NULL;
        this->right = NULL;
    }
};
bool haspath(Node *root,vector<int> &v,int x)
{
    if(root==NULL) return false;
    v.push_back(root->data);
    if(root->data==x) return true;
    if(haspath(root->left,v,x) || haspath(root->right,v,x))
    {
        return true;
    }
    v.pop_back();
    return false;
}
void path(Node *root,int x)
{
    vector<int> v;
    if(haspath(root,v,x))
    {
        for(int i = 0;i<v.size()-1;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<v[v.size()-1];
    }
    else
    {
        cout<<"nO path";
    }
    
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
    path(root,7);
}