int countPairs(struct Node* head1, struct Node* head2, int x) {
    unordered_set<int> st;
    while(head1!=NULL)
    {
        st.insert(head1->data);
        
        head1 = head1->next;
    }
    
    
    int count= 0;
    while(head2)
    {
        if(st.find(x - head2->data) != st.end())
        {
            count++;
        }
        
        head2 = head2->next;
    }
    
    return count;
    
    
    
}