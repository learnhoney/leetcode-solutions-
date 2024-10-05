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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* head = list1, *temp = list1;

        for(int i = 1; i < a; i++){
            temp = temp->next;
        }
        ListNode* end1 = temp;
        ListNode* remove1 = temp->next;

        for(int i = a; i <= b; i++){
            ListNode* temp1 = remove1;
            remove1 = remove1->next;
            delete temp1;
            }

        end1->next = list2;

        while(temp->next){
            temp = temp->next;
            }

        temp->next = remove1;
    
    return head;
    }
};