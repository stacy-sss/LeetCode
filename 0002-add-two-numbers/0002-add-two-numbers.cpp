/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* f = new ListNode(0);
        ListNode* f_save = f;
        int p = 0;//перенос
        while(l1 != nullptr || l2 != nullptr || p != 0){
            int sum = p;
            if(l1!=nullptr){
                sum+= l1->val;//складываем значения
                l1=l1->next;//меняем указатель
            }
            if(l2!=nullptr){
                sum+= l2->val;
                l2=l2->next;
            }
            p = sum/10;//перенос
            int digit = sum % 10;//число следующего узла
            f_save->next = new ListNode(digit);//создаем узел с числом выше
            f_save = f_save->next;//меняем указатель
        }
        return f->next;//возвращаем получившуюся сумму
    }
};