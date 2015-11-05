Reverse a single LL

Iterative:
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       
        if (head == NULL)
           return head;
           
        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* temp;
        head->next = NULL;
        while(curr){
         temp = curr->next;
         curr->next = prev;
         prev = curr;
         curr = temp;

        }
        head =  prev;
        return head;
    }
};

Recursion:
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode* curr = head;
       if(curr == NULL)
                return curr;
       if (curr->next == NULL){
           head = curr;
       return head;
       }
       
       head = reverseList(curr->next);
       curr->next->next = curr;
       curr->next = NULL;
       
     return head;  
    }
};