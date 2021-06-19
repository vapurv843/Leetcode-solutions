#include<bits/stdc++.h>
using namespace std ;
class node
{
    public:
    int data;
    vector<node*> children;

};
vector<int> ntc(node *root,int num)
{
    if(root->data == num)
    {
        vector<int> v;
        v.push_back(root->data);
        return v;
    }
    for(node *p :root->children)
    {
        vector<int> vv=ntc(root,num);
        if(vv.size()>0)
        {
            vv.push_back(root->data);
            return vv;

        }
    }

}



bool search(node *root,int num)
{
    if(root->data==num) return true;
    for(node *t:root->children)
    {
        bool k = search(root,num);
        if(k)
        {
            return true;
        }
    }
    return false;
}
void print(node *root)
{
    cout<<"["<<root->data<<"]"<<"->"<<" ";
    for(node *t :root->children)
    {
        cout<<t->data<<" ";
    }
    cout<<endl;
    for(node *t:root->children)
    {
        print(t);
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
    
    vector<int> v =ntc(root,60);
    for(auto i :v)
    {
        cout<<i<<" ";
    }
    
}