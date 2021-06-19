#include<iostream>
using namespace std;
class Node
{
    int data;
    Node *right,*left;
    Node(int data)
    {
        this->data=data;
        this->left =NULL;
        this->right = NULL;
    }

};
