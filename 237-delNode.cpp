// https://leetcode.com/problems/delete-node-in-a-linked-list/

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
        node->val=node->next->val; // copying the next element to the present element.
        node->next=node->next->next; // skipping the next element.
    }
};
