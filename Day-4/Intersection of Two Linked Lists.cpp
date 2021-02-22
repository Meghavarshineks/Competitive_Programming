//Write a program to find the node at which the intersection of two singly linked lists begins.


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //ListNode head,*temp;
        unordered_set<ListNode *>check;
        while(headA){
            check.insert(headA);
            headA=headA->next;
        }
        while(headB){
            if(check.find(headB)!=check.end()){
                return headB;
            }
            headB=headB->next;
        }
        return NULL;
    }
};
