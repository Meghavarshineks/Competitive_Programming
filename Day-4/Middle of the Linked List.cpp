https://leetcode.com/problems/middle-of-the-linked-list/

//Given a non-empty, singly linked list with head node head, return a middle node of linked list.

//If there are two middle nodes, return the second middle node.

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow_pointer=head;
        ListNode* fast_pointer=head;
        while(fast_pointer!=NULL){
            if(fast_pointer -> next == NULL) return slow_pointer;
            slow_pointer = slow_pointer -> next;
            fast_pointer = fast_pointer -> next -> next;
        }
            return slow_pointer;
    }
};
