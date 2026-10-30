// LeetCode : https://leetcode.com/problems/odd-even-linked-list/description/




/*
// 1 Approach : 


*/



class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        ListNode* odd = new ListNode(-1); 
        ListNode* even = new ListNode(-1);

        ListNode* t1 = head;
        ListNode* t2 = head;

        ListNode* curr1 = odd;
        ListNode* curr2 = even;

        int i = 1;
        int j = 1;
        while (t1) {
            if (i % 2 != 0) {
                curr1->next = new ListNode(t1->val);
                curr1 = curr1->next;
            }
            i++;
            t1 = t1->next;
        }
        while (t2) {
            if (j % 2 == 0) {
                curr2->next = new ListNode(t2->val);
                curr2 = curr2->next;
            }
            j++;
            t2 = t2->next;
        }
        odd = odd->next;
        even = even->next;
        if (odd == NULL) {
            return even;
        }

        ListNode* temp = odd;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = even;
        return odd;
    }
};