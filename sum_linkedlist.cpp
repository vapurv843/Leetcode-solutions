class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp = NULL;
        int sum =0;
        int carry = 0;
        ListNode **node = &temp;
        while(l1!=NULL or l2!=NULL or sum>0)
        {
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            (*node)=new ListNode(sum%10);
            sum/=10;
            node = &((*node)->next);
        }
        return temp;
        
        
    }
};