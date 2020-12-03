#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    vector<node*> children;
};
bool find(node *root,int data)
{
    if(root->data == data)
    {
        return true;

    }
    for(node *h :root->children)
    {
        bool p = find(h,data);
        if(p)
        {
            return true;
        }
    }
    return false;
}
void levelorder(node *root)
{
    queue<node*> q;
    q.push(root);

    while(q.size()>0)
    {
        root = q.front();
        q.pop();
        cout<<root->data<<" "<<endl;
        for(node *t :root->children)
        {
            q.push(t);
        }
    }

}
int maxx(node *root)
{
    int mx = INT_MIN;
    for(node *pt :root->children)
    {
        int mn = maxx(pt);
        mx = max(mx,mn);
    }
    mx = max(root->data,mx);
    return mx;
}
void print(node *root)
{
    cout<<"["<<root->data<<"]"<<" ";
    for(node *b :root->children)
    {
        cout<<b->data<<" ";
    }
    cout<<endl;
    for(node *c :root->children)
    {
        print(c);
    }
}

int main()
{
    int a[]={10,5,4,5,6,7,8,9,-1,1,-1,-1,60,-1,-1};
    int n = sizeof(a)/sizeof(int);
    stack<node*> s;
    node *root = nullptr;
    for(int i = 0;i<n;i++)
    {
        if(a[i]==-1)
        {
            s.pop();
        }
        else
        {
            node *temp = new node();
            temp->data = a[i];
            if(s.empty())
            {
                root = temp;
            }
            else
            {
                s.top()->children.push_back(temp);
            }
            s.push(temp);
            
        }
        
    }
    print(root);
    cout<<endl;
    cout<<maxx(root)<<endl;
    levelorder(root);
    if(find(root,409))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"No";
    }
    

}