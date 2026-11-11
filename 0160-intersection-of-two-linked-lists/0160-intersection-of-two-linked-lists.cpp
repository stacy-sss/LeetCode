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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *cur_a = headA;
        ListNode *cur_b = headB;

        while(cur_a != cur_b){
            if(cur_a == nullptr){
                cur_a = headB;
            }else{
                cur_a = cur_a->next;
            }

            if(cur_b == nullptr){
                cur_b = headA;
            }else{
                cur_b = cur_b->next;
            }
        }
        return cur_a;
    }
};