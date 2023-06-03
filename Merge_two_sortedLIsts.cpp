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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>a;
        while(list1!=NULL){
            a.push_back(list1->val);
            list1=list1->next;
        }
        while(list2!=NULL){
            a.push_back(list2->val);
            list2=list2->next;
        }
        sort(a.begin(),a.end());
        ListNode *dummy = new ListNode(0);
        ListNode *head=dummy;
        ListNode *temp=head;
        int i=0;
        while(i<a.size()){
            if(temp->next==NULL){
                ListNode *newnode = new ListNode(a[i]);
                newnode->next=NULL;
                temp->next=newnode;
                temp=temp->next;
            }
            i++;
        }
        return head=head->next;
    }
};