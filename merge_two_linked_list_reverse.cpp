if(head1 != NULL)
    {
        end->next = head1;
    }
    else
    {
        end->next = head2;
    }
    
    start = reverse(start);
    
    return start;
