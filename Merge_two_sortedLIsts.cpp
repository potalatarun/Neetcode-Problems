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




// 2nd version of solution 

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
        ListNode *head=new ListNode(0);
        head->next=NULL;
        ListNode *temp=head;
        // temp=temp->next;
        while(list1!=NULL or list2!=NULL){
            if(list1==NULL){
                temp->next=list2;
                return head->next;
            }
            if(list2==NULL){
                temp->next=list1;
                return head->next;
            }
            if(list1->val<=list2->val){
                ListNode *newnode = new ListNode(list1->val);
                newnode->next=NULL;
                temp->next=newnode;
                temp=temp->next;
                list1=list1->next;
            }
            else {
                ListNode *newnode = new ListNode(list2->val);
                newnode->next=NULL;
                temp->next=newnode;
                temp=temp->next;
                list2=list2->next;
            }
        }
        return head->next;
    }
};