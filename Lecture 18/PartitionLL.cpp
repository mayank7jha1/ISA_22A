

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
	ListNode* partition(ListNode* head, int x) {
		ListNode* n = NULL, *le = NULL, *leh = NULL, *seh = NULL, *se = NULL;

		while (head != NULL) {
			n = head->next;
			if (head->val < x) {
				if (se == NULL) {
					//Abhi tak meri smaller vaali ll khali hain:
					seh = se = head;
					head->next = NULL;
					head = n;
				} else {
					//ab tumhari choti vaali ll khali nahi hain
					se->next = head;
					head->next = NULL;
					se = head;
					head = n;
				}
			} else {
				if (le == NULL) {
					//Abhi tak meri large vaali ll khali hain:
					leh = le = head;
					head->next = NULL;
					head = n;
				} else {
					le->next = head;
					head->next = NULL;
					le = head;
					head = n;
				}
			}
		}

		if (se != NULL) {
			se->next = leh;
			return seh;
		} else {
			return leh;//Koi bhi chota element tha hi nahi
		}
	}
};