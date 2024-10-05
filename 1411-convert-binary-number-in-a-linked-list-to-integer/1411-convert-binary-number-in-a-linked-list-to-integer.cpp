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
    int getDecimalValue(ListNode* head) {
        ListNode* temp;
        temp = head;
        int len = 0;
        while(temp){
            len++;
            temp = temp->next;
        }

        int bin = 0;
        temp = head;
        while(temp){

            bin = bin + temp->val * pow(2, len - 1);
            len--;
            temp = temp->next;
        }
        return bin;
    }
};