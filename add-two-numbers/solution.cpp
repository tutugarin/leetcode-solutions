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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* nodePtr = new ListNode();
        ListNode* dummy = nodePtr;
        int bringUp = 0;
        while (l1 != nullptr && l2 != nullptr) {
            ListNode* tmp = new ListNode();
            tmp->val = (l1->val + l2->val + bringUp) % 10;
            bringUp = (l1->val + l2->val + bringUp) / 10;
            l1 = l1->next;
            l2 = l2->next;
            nodePtr->next = tmp;
            nodePtr = tmp;
        } 

        if (l1 == nullptr and l2 != nullptr) {
            while (l2 != nullptr) {
                ListNode* tmp = new ListNode();
                tmp->val = (l2->val + bringUp) % 10;
                bringUp = (l2->val + bringUp) / 10;
                nodePtr->next = tmp;
                nodePtr = tmp;
                l2 = l2->next;
            }
            
        } else if (l2 == nullptr and l1 != nullptr) {
            while (l1 != nullptr) {
                ListNode* tmp = new ListNode();
                tmp->val = (l1->val + bringUp) % 10;
                bringUp = (l1->val + bringUp) / 10;
                nodePtr->next = tmp;
                nodePtr = tmp;
                l1 = l1->next;
            }
            
        }

        if (bringUp != 0) {
            ListNode* tmp = new ListNode();
            tmp->val =  bringUp;
            nodePtr->next = tmp;
            nodePtr = tmp;
        }

        return dummy->next;
    }
};


