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

    ListNode* reversefunction(ListNode* head){
        ListNode* curr = head;
        ListNode* lastnode = nullptr;
        while(curr != nullptr){
            ListNode* nextnode = curr->next;
            curr->next = lastnode;
            lastnode = curr;
            curr = nextnode;
        }

        return lastnode;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        } 
        ListNode* reverse = reversefunction(slow);
        while(reverse != nullptr){                //checks if rev ll == ll 
            if(head->val != reverse->val){    //val is data here 
                return false;
            }

            head = head->next;
            reverse = reverse->next;

        }

        return true;
    }
};