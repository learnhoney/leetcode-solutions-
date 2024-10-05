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
        ListNode* startl1 = temp;
        ListNode* endl1 = temp->next;

        for(int i = a; i <= b; i++){
            ListNode* temp1 = endl1;
            endl1 = endl1->next;
            delete temp1;
            }

        startl1->next = list2;

        while(temp->next){
            temp = temp->next;
            }

        temp->next = endl1;
    
    return head;
    }
};