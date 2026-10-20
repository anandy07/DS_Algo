// LeetCode Link : https://leetcode.com/problems/delete-node-in-a-linked-list/description/


// 1 Approach : 
// T.C : 
// S.C : 


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
    void deleteNode(ListNode* node) {

        node->val = node->next->val;

        node->next = node->next->next;
        
    }
};