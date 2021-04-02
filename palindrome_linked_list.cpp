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
        vector<int> v;
        while(head)
        {
            v.push_back(head->val);
            head = head->next;
        }
       vector<int> v1;
        for(int i = 0;i<v.size();i++)
        {
            v1.push_back(v[i]);
        }
        reverse(v1.begin(),v1.end());
        for(int i = 0;i<v.size();i++)
        {
            if(v1[i]!=v[i])
            {
                return false;
            }
        }
        return true;
            
        
        
    }
};