#include<bits/stdc++.h>
using namespace std;



class Node
{
    public:
    int data;
    vector<Node*> children;
};
int heigh(Node *h)
{
    int height = -1;
    for(Node *ht :h->children)
    {
        int ch = heigh(ht);
        height = max(height,ch);
    }
    return height+1;
}
int maxi(Node *temp)
{
    int mx = INT_MIN;
    for(Node *t : temp->children)
    {
        int m = maxi(t);
        mx=max(mx,m);
    }
    mx  = max(temp->data,mx);
    return mx;
}
int size(Node *temp)
{
    int count = 1;
    for(Node *t : temp->children)
    {
        int c = size(t);
        count+=c;
    }
    return count;
}
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
    int a[]={10,5,4,5,6,7,8,9,-1,1,-1,-1,60,-1,-1};
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
    
    printTree(root);
    int p = size(root);
    cout<<"Size of tree is "<<" : "<<p<<endl;
    cout<<"maximim in tree is "<<":"<<maxi(root)<<endl;
    cout<<"The heigth of tree is"<<"::"<<heigh(root)<<endl;

    return 0;
}


