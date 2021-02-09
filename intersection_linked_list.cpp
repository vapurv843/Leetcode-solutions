int k(int diff,Node *head1,Node *head2)
{
    Node *temp1= head1;
    Node *temp2= head2;
    for(int i = 0;i<diff;i++)
    {
        
        temp1=temp1->next;
    }
    while(temp1!=NULL and temp2!=NULL)
    {
        if(temp1==temp2)
        {
            return temp1->data;
        }
        temp1=temp1->next;
        temp2= temp2->next;
    }
    return -1;
}
int count(Node *head)
{
    int count = 0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count;
}
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int count1= count(head1);
    int count2 = count(head2);
    int diff;
    if(count1>count2)
    {
        diff = count1-count2;
        return k(diff,head1,head2);
    }
    else
    {
        diff = count2-count1;
        return k(diff,head2,head1);
    }
    
    
}

