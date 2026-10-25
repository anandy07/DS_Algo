// LeetCode : https://leetcode.com/problems/add-two-numbers/

// 1 Approach : 
// T.C : 
// S.C : 


/*

I am using two pointer to triverse the lists , then adding both the digits and the previous carry , storing the sum%10 in the new node 
updating the carry by sum/10 , if there any carry left attach to it and return the dummy->next



*/




class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* t1 = l1;
        ListNode* t2 = l2;

        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        int carry=0;

        while(t1 != NULL || t2 != NULL){
            int sum =carry;
            if(t1 != NULL){
                sum += t1->val;
                t1 = t1->next;
            }
            if(t2 != NULL){
                sum += t2->val;
                t2 = t2->next;
            }
            curr->next = new ListNode(sum%10);
            carry=sum/10;
            curr = curr->next;
            
        }
        if(carry != 0){
            curr->next = new ListNode(carry);
            curr = curr->next;
        }
        dummy = dummy->next;
        return dummy;
        
    }
};