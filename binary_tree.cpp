#include<bits/stdc++.h>
using namespace std ;
class Node
{
    public:
    int data;
    Node *left,*right;
    Node(int data){ 
        this->data = data; 
        this->left = NULL; 
        this->right = NULL; 
    } 
};
//void printGivenLevel(node* root, int level); 
int height(node* node); 
//node* newNode(int data); 
void printLevel(Node *root,int h)
{
  if(root==NULL) return ;
  if(h==1)
  {
    cout<<root->data<<endl;
  else if(h>1)
  {
    print(root->left,h-1);
    printLevel(root->right,h-1);

  }
    
}
void  printLevelByLevel(Node *root)
{
  int h = height(root);
  for(int i = 1;i<=h;i++)
  {
    printLevel(root,i);
  }
}
void printPostorder(Node *root)
{
  if(root==NULL) return ;
  printPostorder(root->left);
  printPostorder(root->right);
  cout<<root->data<<" ";
}
void printInorder(Node *root)
{
  if(root==NULL) return ;
  printInorder(root->left);
  cout<<root->data<<" ";
  printInorder(root->right);
}
int getMax(Node *root)
{
    if(root==NULL) return INT_MIN;
    int k= getMax(root->left);
    int l = getMax(root->right);
    int j = max(max(k,l),root->data);
    return j;
}
int height(Node *root)
{
    if(root == NULL) return 0;
    int k = height(root->left);
    int l = height(root->right);
    int l1 = max(k,l)+1;
    return l1;
}
static Node * const DELIMITER = nullptr;
void printLevelByLevel(Node *root) {
  if (root == nullptr) return;

  queue<Node *> qu;
  qu.push(root);
  qu.push(DELIMITER);
  while (true) {
    Node *curr = qu.front();
    qu.pop();
    if (curr != DELIMITER) {
      cout << curr->data << ' ';
      if (curr->left != nullptr) {
        qu.push(curr->left);
      }
      if (curr->right != nullptr) {
        qu.push(curr->right);
      }
    }
    else {
      cout << '\n';
      if (qu.empty()) break;
      qu.push(DELIMITER);
    }
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
    printLevelByLevel(root);
    cout<<endl;
    cout<<"Max in tree is :"<<getMax(root)<<endl;
    cout<<"Height of the tree is "<<height(root)<<endl;
    cout<<"Inorder of tree is :";
    printInorder(root);
    cout<<endl;
    cout<<"Post order of tree is :";
    printPostorder(root);
    printLevelByLevel(root);
    
}