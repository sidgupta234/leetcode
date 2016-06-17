// https://leetcode.com/problems/swap-nodes-in-pairs/
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* pre = NULL, *curr=head, *ahead=NULL, *aheadnext=NULL, *ans=NULL;
        
        if(head==NULL || head->next==NULL)
            return head;
        
        ans=head->next;
        
        while(curr && curr->next){
            ahead = curr -> next;
            aheadnext = ahead -> next;
            ahead -> next = curr;
            curr -> next = aheadnext;
            
            if(pre)
                pre ->next = ahead;
            
            pre = curr;
            curr = aheadnext;
            
        }
        
        return ans;
        
    }
};
