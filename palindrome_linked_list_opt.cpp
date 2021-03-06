/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode *count = head;
        while(count)
        {
            st.push(count->val);
            count= count->next;
        }
        while(head)
        {
            int i = st.top();
            st.pop();
            if(head->val!=i)
            {
                return false;
            }
            head = head->next;
        }
        return true;
        
    }
};