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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* dummy = new ListNode(-1);
        ListNode* temphead = dummy;

        int sum = 0;
        while(temp){
            if(temp && temp->val != 0){
                sum += temp->val;
                
            }else if(temp && temp->val == 0){
                ListNode* newlistnode = new ListNode(sum);
                temphead->next = newlistnode;
                temphead = temphead->next;
                sum = 0;
            }

            temp = temp->next;
            
        }
        return dummy->next;
    }
};