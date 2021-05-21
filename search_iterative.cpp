#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *left,*right;
   
};
node *create(int data)
{
    node *root = new node;
    root->data = data;
    root->left =root->right = nullptr;
    return root;
}
bool search(node *root,int x)
{
    while(root!=NULL)
    {
        if(x<root->data)
        {
            return search(root->left,x);
        }
        else if(x>root->data)
        {
            return search(root->right,x);
        }
        else
        {
            return 1;
        }
        

    }
    return 0;
}
node *insert(node *root,int x)
{
    //node *top = new node;
    if(root==NULL)
    {
        return create(x);
    }
    if(x<root->data)
    {

        root->left = insert(root->left,x);
    }
    else
    {
        root->right = insert(root->right,x);
    }
    return root;
    
}
void print(node *root)
{
    if(root==NULL) return ;
    
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}

int main()
{
    node *root = nullptr;
    vector<int> v = { 15, 10, 20, 8, 12, 16, 25 };
    for(auto x:v)
    {
        root = insert(root,x);
    }
    print(root);
    if(search(root,800))
    {
        cout<<"Found";
    }
    else
    {
        cout<<" No";
    }
    
}