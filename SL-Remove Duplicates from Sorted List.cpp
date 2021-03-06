Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        if (curr == NULL)
        return NULL;
        if(curr->next == NULL)
        return head;
        while(curr->next){
            
            if(curr->val == curr->next->val)
            curr->next = curr->next->next;
            else
            curr = curr->next;
        }
        
        return head;
        
    }
};