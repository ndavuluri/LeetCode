Write a program to find the node at which the intersection of two singly linked lists begins.


For example, the following two linked lists:

A:          a1 ? a2
                   ?
                     c1 ? c2 ? c3
                   ?            
B:     b1 ? b2 ? b3
begin to intersect at node c1.

Iterative:
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
        ListNode * AA = A;
        ListNode * BB = B;
        ListNode * final = NULL;
        int diff = 0;
        while(A && B){
            A=A->next;
            B=B->next;
        }
        while(A){
            ++diff;
            A=A->next;
        }
        while(B){
            B=B->next;
            --diff;
        }
        if(diff>0){
        while(diff){
            AA = AA->next;
            --diff;
        }
        }
        if(diff<0){
            while(diff<0){
                ++diff;
                BB=BB->next;
                
            }
            
        }
        while(AA && BB){
        if(AA->val == BB->val){ 
        if(final == NULL)
          final = AA;
        }
        else
        final = NULL;
        AA = AA->next;
        
        BB= BB->next;
    }
    return final;
    }
};