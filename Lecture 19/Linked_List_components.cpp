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
    int numComponents(ListNode* head, vector<int>& nums) {
        int freq[10001] = {0};
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        int components = 0;

        while (head != NULL) {
            if (freq[head->val] == 1 and (head->next == NULL or freq[head->next->val] == 0)) {
                components++;
            }
            head = head->next;
        }
        return components;
    }
};




