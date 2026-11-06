// LeetCode : https://leetcode.com/problems/reverse-linked-list/ 




/*

Store the elements of the LL in the stack and pop those elements in the original head. We are just reversing the LL in terms of Data

*/


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Reverse the LL in terms of Data 
        stack<int>s;
        ListNode* temp = head;
        while(temp){
            s.push(temp->val);
            temp = temp->next;
        }
        temp = head;

        int i=0;
        while(temp){
            temp->val = s.top();
            s.pop();
            temp = temp->next;
            i++;
        }
        return head;
    }
};