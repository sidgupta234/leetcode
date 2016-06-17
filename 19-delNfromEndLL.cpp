// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */// 1 2 3 4 5 6 //n - i + 1  
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *ref=head, *del=head;
        
        for(int i=0; i<n; i++){
            ref = ref -> next ;
        }
        
        if(ref==NULL)
            return head->next;
        
        ref = ref -> next;
        
        while(ref){
            del = del -> next ;
            ref = ref -> next ; 
        }
        
        del -> next = del -> next -> next;
        return head;
    }
};
