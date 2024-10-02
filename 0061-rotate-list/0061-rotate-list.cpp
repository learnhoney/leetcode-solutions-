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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k ==0 || head->next == 0) return head;
        int len = 1;
        ListNode* storehead = head;
        while(storehead->next != NULL){
            len++;
            storehead = storehead->next;
        }    //simple traverse

        if(k % len == 0) return head; //multiple so reversing is rendering me same list
        k = len - (k % len); //if not multiple to agar len se bda hai we get the actual posxns reverse krne ka value 
        storehead->next = head;
        while(k--) storehead = storehead->next;

        ListNode* newhead = storehead->next;
        storehead->next = nullptr;

        return newhead;

    }
};