/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      int lenA = 0, lenB = 0;
      ListNode* nodeA = headA;
      while(nodeA){
        lenA++;               //length counters 
        nodeA = nodeA->next;
      }
      ListNode* nodeB = headB;
      while(nodeB){
        lenB++;
        nodeB = nodeB->next;
      }
      nodeA = headA;
      nodeB = headB;

      while(lenA > lenB){
        nodeA = nodeA->next;
        lenA--;
      }
      while(lenA < lenB){
        nodeB = nodeB->next;
        lenB--;
      }
      while(nodeA && nodeB){
        if(nodeA == nodeB){
            return nodeA;
        }else{
            nodeA = nodeA->next;
            nodeB = nodeB->next;
        }
      }
      return NULL;

    }
};