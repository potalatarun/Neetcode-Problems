/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL or head->next==NULL)return false;
        ListNode *fast = head,*slow=head;
        int i=0;
        do{
            slow=slow->next;
            if(slow==NULL or slow->next==NULL)return false;
            fast = fast->next;
            if(fast==NULL or fast->next==NULL)return false;
            fast=fast->next;
            // i++;
        }while(fast!=slow);
        return fast==slow;
    }
};