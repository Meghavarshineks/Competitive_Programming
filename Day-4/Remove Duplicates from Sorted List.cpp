https://leetcode.com/problems/remove-duplicates-from-sorted-list/

//Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* iter=head;
        while(iter!=NULL){
            if((iter->next)and(iter->val==iter->next->val)){
                iter->next=iter->next->next;
            }
            else{
                iter=iter->next;
            }
            
        }
        return head;
    }
};
