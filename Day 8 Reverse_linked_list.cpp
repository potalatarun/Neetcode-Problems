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
    ListNode* reverseList(ListNode* head) {
        vector<int>a;
        ListNode *temp = head;
        while(temp!=NULL){
            a.push_back(temp->val);
            temp=temp->next;
        }
        int s=0,e=a.size()-1;
        while(s<=e){
            swap(a[s],a[e]);
            s++;
            e--;
        }
        temp=head;
        int i=0;
        while(temp!=NULL){
            temp->val=a[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};