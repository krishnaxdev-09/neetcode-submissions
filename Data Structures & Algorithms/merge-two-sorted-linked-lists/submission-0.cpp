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
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;

        ListNode* temp = list1;
        ListNode* temp2 = list2;
        while(temp != NULL && temp2 != NULL){
            if(temp->val < temp2->val){
                curr->next = new ListNode(temp->val);
                temp = temp->next;
                curr = curr->next;
            }
            else if (temp2->val < temp->val){
                curr->next = new ListNode(temp2->val);
                temp2 = temp2->next;
                curr = curr->next;
            }
            else{
                curr->next = new ListNode(temp->val);
                temp = temp->next;
                curr = curr->next;
                curr->next = new ListNode(temp2->val);
                temp2 = temp2->next;
                curr = curr->next;
            }
        }
        if(temp != NULL){
            while(temp != NULL){
                curr->next = new ListNode(temp->val);
                curr = curr->next;
                temp = temp->next;
            }
        }
        if(temp2 != NULL){
            while(temp2 != NULL){
                curr->next = new ListNode(temp2->val);
                curr = curr->next;
                temp2 = temp2->next;
            }
        }
        //curr->next = new ListNode(NULL);
        return dummy->next;
    }
};
