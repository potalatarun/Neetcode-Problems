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
    void reorderList(ListNode* head) {
        ListNode* ptr = head;
        vector<int>a;
        while(ptr!=NULL){
            int v = ptr->val;
            a.push_back(v);
            ptr=ptr->next;
        }
        int i=0,j=a.size()-1;
        ptr=head;
        while(i<j){
            ptr->val=a[i];
            ptr=ptr->next;
            ptr->val=a[j];
            ptr=ptr->next;
            i++;
            j--;
        }
        if(a.size()%2!=0){
            ptr->val=a[i];
        }
    }
};