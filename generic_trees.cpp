#include<bits/stdc++.h>
using namespace std;



class Node
{
    public:
    int data;
    vector<Node*> children;
};

void printTree(Node* node)
{
    cout << "[" << node->data << "] - ";
    for(Node* child : node->children) {
        cout << child->data << " ";
    }
    cout << endl;
    
    for(Node* child : node->children) {
        printTree(child);
    }
}

int main()
{
    int a[]={10,5,4,-1,1,-1,-1,6,-1,-1};
    int n=sizeof(a)/sizeof(a[0]);
    
    stack<Node*> s;
    Node* root = nullptr;
    for(int i=0;i<n;i++)
    {
        if(a[i]==-1)
        s.pop();
        else
        {
            Node* temp = new Node();
            temp->data=a[i];
            if(s.size()==0)
            {
                root=temp;
            }
            else
            {
                s.top()->children.push_back(temp);
            }
            
            s.push(temp);
        }
    }
    //cout<<root->children.size()<<endl;
    printTree(root);

    return 0;
}


