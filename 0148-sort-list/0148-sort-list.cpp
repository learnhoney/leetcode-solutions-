class Solution {
public:
    ListNode* findmid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* merger(ListNode* leftlist, ListNode* rightlist) {
        ListNode* storenode = new ListNode(-1);
        ListNode* temp = storenode;

        while (leftlist != NULL && rightlist != NULL) {
            if (leftlist->val < rightlist->val) {
                temp->next = leftlist;
                leftlist = leftlist->next;
            } else {
                temp->next = rightlist;
                rightlist = rightlist->next;
            }
            temp = temp->next;
        }

        if (leftlist != NULL) temp->next = leftlist;
        else temp->next = rightlist;

        return storenode->next;
    }

    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;

        ListNode* mid = findmid(head);
        ListNode* right = mid->next;
        ListNode* left = head;
        mid->next = nullptr;

        left = sortList(left);
        right = sortList(right);

        return merger(left, right);
    }
};
