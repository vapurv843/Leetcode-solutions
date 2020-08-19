#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
node *head = NULL;
int findloop(node *head)
{
    node *fast,*slow;
    while(fast!=NULL && (fast->next!=NULL))
    {
        fast = fast->next->next;
        slow = slow->next;
        if(slow==fast)
        {
            return 1;
            cout<<"not find";
        }
        else
        {
            cout<<"No loop"<<endl;
        }
        
        
        
    }
    return 0;
}
void reverse()
{
    node *current = head;
    node *nex = NULL;
    node *prev = NULL;
    while(current!=NULL)
    {
        nex = current->next;
        current->next = prev;
        prev = current;
        current = nex;

    }
    head = prev;
}
void midele()
{
    node *slow = head;
    node *fast = head;
    if(head ==NULL)
    {
        cout<<"List is empty";
    }
    else
    {
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        cout<<"Mid element "<< slow->data<<endl;
    }
    
}
void delend()
{
    node *ptr;
    if(head==NULL)
    {
        cout<<"List is empty";
    }
    if(head->next==NULL)
    {
        ptr = head;
        head = NULL;
        
    }
    else
    {
        node *prev=NULL;
        ptr = head;
        while(ptr->next !=NULL)
        {
            prev = ptr;
            ptr=ptr->next;
        }
        prev->next = NULL;
        
    }
    
}
void del()
{
    node *ptr = head;
    if(head == NULL)
    {
        cout<<"List is empty";
    }
    else
    {
        node *ptr = head;
        head = head->next;
        free(ptr);
    }
    
}
void display1()
{
    node *temp = head;
    cout<<temp->next->data<<endl;
    cout<<temp->next->next->data<<endl;
}
void display()
{
    node *temp = head;
    cout<<"\t"<< " data " << "\t" << " address"<<endl;
    while(temp!=NULL)
    {
        cout<<"\t"<< temp->data << "\t " <<temp->next<<endl;
        temp = temp->next;
    }
}
void end(int data)
{
    node *ptr = new node();
    ptr->data = data;
    ptr->next = NULL;
    if(head==NULL)
    {
        ptr = head;

    }
    else
    {
        node *temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
    
}
void beg(int data )
{
    node *ptr = new node();
    ptr->data = data;
    ptr ->next = head;
    head = ptr;
}
int main()
{
    
    
   beg(99);
    end(90);
    end(999);
    end(9908);
    display();
    findloop(&head);
    display1();

}