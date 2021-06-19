#include<bits/stdc++.h>
using namespace std ;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
node *newNode(int data)
{
    node *temp = new node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
int solve(node *root,int x,int &count)
{
    if(root==NULL) return 0;
    int l = solve(root->left,x,count);
    int r = solve(root->right,x,count);
    int sum =l+r+root->data;
    if(sum==x) count++;
    return sum; 
}
int count1(node *root,int x)
{
    int count = 0;
    solve(root,x,count);
    return count;
}



int main() {

   int x;
   cout<<"Enter the sum to check for"<<endl;
   cin>>x;
//sample input of the binary tree 
	struct node* root=newNode(1);
	root->left=newNode(3);
	root->right=newNode(4);
	root->left->right=newNode(6);
	root->left->left=newNode(2);
    root->right->right=newNode(11);
    root->right->left=newNode(1);
    root->right->right->left=newNode(11);
    root->right->right->right=newNode(1);
	cout<<"Number of subtrees with specific sum :"<<" "<<count1(root, x)<<endl;
	
	return 0;
}
