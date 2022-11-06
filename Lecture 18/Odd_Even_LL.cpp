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
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL or head->next == NULL) {
            return head;
        }

        ListNode* evenhead = head->next;
        ListNode* oddhead = head;

        ListNode* prev = NULL, *current = head, *n = NULL;
        int jump = 0;//THis is to check if the given ll is odd or even

        while (current != NULL and current->next != NULL) {
            n = current->next;
            current->next = n->next;
            prev = current;
            current = n;
            jump++;
        }//After this there will be two ll created;

        if (jump % 2 == 0) {
            current->next = evenhead;
        } else {
            prev->next = evenhead;
        }

        return oddhead;
    }
};