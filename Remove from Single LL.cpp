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
    ListNode* removeElements(ListNode* head, int val) {
        if (head != NULL)
        {
            (head->val == val ? head : head->next) = removeElements(head->next, val);
        }
        return head;
    }
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(-1);
        dummy.next = head;
        ListNode* prev = &dummy;
        ListNode* cur = head;
        while(cur != NULL) {
            if(cur->val == val) {
                cur = cur->next;
                prev->next = cur;
            } else {
                cur = cur->next;
                prev = prev->next;
            }
        }
        return dummy.next;
    }
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(-1);
        dummy.next = head;
        ListNode *p = &dummy;
        while (p && p->next) {
            if (p->next->val == val) 
                p->next = p->next->next;
            else
                p = p->next;
        }
        return dummy.next;
    }
};
