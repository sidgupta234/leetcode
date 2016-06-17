//https://leetcode.com/problems/reverse-linked-list/
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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head, *ahead=NULL, *newHead=NULL;
        
        while(curr){
            ahead = curr->next;
            curr->next = newHead;
            newHead = curr;
            curr = ahead;
            
        }
        
        return newHead;
    }
};
