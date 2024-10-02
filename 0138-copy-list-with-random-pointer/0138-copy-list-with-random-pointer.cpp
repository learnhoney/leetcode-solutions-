class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) return NULL;
        
        Node* temp = head;
        while (temp != NULL) {
            Node* newnode = new Node(temp->val);
            newnode->next = temp->next;
            temp->next = newnode;
            temp = newnode->next;
        }

        temp = head;
        while (temp != NULL) {
            if (temp->random != NULL) {
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }

        Node* newhead = head->next;
        temp = head;
        while (temp != NULL) {
            Node* copy = temp->next;
            temp->next = copy->next;
            if (copy->next != NULL) {
                copy->next = copy->next->next;
            }
            temp = temp->next;
        }

        return newhead;
    }
};
