/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//dummy keeps track of head

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* temp = NULL;
        ListNode* dummy = NULL;
        if(!l1 && !l2)
        return NULL;
        if(!l1)
         return l2;
         if(!l2)
         return l1;
         if(l1->val <= l2->val){
            temp = l1;
            l1 = l1->next;
         }
         else{
             temp = l2;
             l2 = l2->next;
         }
         dummy = temp;
         
         while(l1 && l2){
         if(l1->val <= l2->val){
             temp->next = l1;
             l1= l1->next;
         }
           else{
             temp->next = l2;
             l2 = l2->next;
         }
         temp=temp->next;
         }
         
         if(l1){
             temp->next = l1;
         }
         if(l2){
             temp->next = l2; 
         }
         return dummy;
    }
};

Recursive: 

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* temp = NULL;
        ListNode* dummy = NULL;
        if(!l1 && !l2)
        return NULL;
        if(!l1)
         return l2;
         if(!l2)
         return l1;
         if(l1->val <= l2->val){
            temp = l1;
            l1 = l1->next;
            
         dummy = temp;
         temp->next = mergeTwoLists(l1,l2);
         }
         else{
             temp = l2;
             l2 = l2->next;
             
         dummy = temp; 
         temp->next = mergeTwoLists(l1,l2);
         }
        
         return dummy;
    }
};