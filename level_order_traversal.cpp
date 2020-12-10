#include<iostream>
using namespace std;
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
void print(Node *root,int level)
{
    if(root==NULL) return ;
    if(level==1) cout<<root->data<<" ";
    
    else if(level>1)
    {
        print(root->left,level-1);
        //cout<<endl;
        print(root->right,level-1);
    }
    
}
int height (Node *root)
{
    if(root==NULL) return 0;
    int h = height(root->left);
    int k = height(root->right);
    int l = max(h,k);
    int p = l+1;
   return p;
}
void printing(Node *root,int level)
{
    if(root==NULL) return;
    if(level ==1 ) cout<<root->data<<" ";
    else if(level>1)
    {
        printing(root->left,level-1);
        printing(root->right,level-1);
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
  
    root->left->left->left = new Node(8);  
    root->left->left->right = new Node(9);  
    root->left->right->left = new Node(10);  
    root->left->right->right = new Node(11);  
    root->right->left->left = new Node(12);  
    root->right->left->right = new Node(13);  
    root->right->right->left = new Node(14);  
    root->right->right->right = new Node(15);  
    int k = height(root);
    for(int i = 1;i<=k;i++)
    {
        printing(root,i);
    }
}