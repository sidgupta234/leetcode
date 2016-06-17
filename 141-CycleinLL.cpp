//https://leetcode.com/problems/linked-list-cycle/
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
    bool hasCycle(ListNode *head) {
        ListNode *slow=head, *fast=head; //using fast abd slow pointers.
        bool hascycle= false;
        
        while(slow && fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow == fast)
                return true;
        }
        
        return false;
    }
};
