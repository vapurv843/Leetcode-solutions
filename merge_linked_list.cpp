#include<iostream>
using namespace std ;

class node
{
    public:
    int data;
    node *next;
    node (int data)
    {
        this->data = data;
        this->next = NULL;
    }
    
    
    
};


void print(node *n)
{
    
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n= n->next;
    }
}

int main()
{
    node *a = new node(10);
    a->next = new node(20);
    a->next->next = new node(30);
    node *b = new node(5);
    b->next = new node(10);

    

    print(a);
    cout<<endl;
    print(b);
    
}