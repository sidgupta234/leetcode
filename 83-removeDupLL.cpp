//https://leetcode.com/problems/remove-duplicates-from-sorted-list/
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* travel=head;
        
        while(travel!=NULL && travel ->next!=NULL){
            
            while(travel!=NULL && travel ->next!=NULL && travel->val == travel -> next ->val){
                travel->next=travel->next->next;
            }
            
            travel=travel->next;
        }
        return head;
    }
};
