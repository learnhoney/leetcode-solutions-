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
    ListNode* findknode(ListNode* temp, int k){
        k -= 1;                            // 0 based indexing ke liye 
        while(temp != NULL && k-- > 0){
            temp = temp->next;
        }
        return temp;
    }

    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr != NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevnode = NULL;  

        while (temp != NULL) {
            ListNode* knode = findknode(temp, k);  
            if (knode == NULL) {
                if (prevnode) prevnode->next = temp;
                break;
            }

            ListNode* nextnode = knode->next;  
            knode->next = NULL;

            ListNode* newhead = reverse(temp);

            if (temp == head){
                head = newhead;
            }else{
                prevnode->next = newhead;   // reverse ke baad to knode hi aage hoga 
            }

            prevnode = temp;
            temp = nextnode;
        }

        return head;
    }
};
