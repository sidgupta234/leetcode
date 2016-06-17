// https://leetcode.com/problems/remove-linked-list-elements/
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
        
        while(head && head->val == val){
            head = head ->next;
        }
        
        ListNode *curr = head;
        
        while(curr && curr -> next){
            while(curr && curr -> next && curr -> next -> val == val){
                curr -> next = curr -> next -> next;
            }
            curr = curr -> next;
        }
        
        return head;
    }
};
