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
    int length(ListNode* head) {
        int ans = 0;
        while (head != NULL) {
            ans++;
            head = head->next;
        }
        return ans;
    }
public:
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        int n = length(root);
        ListNode* head = root;

        int ElementsRemaining = n % k;
        int parts = n / k;
        int len = n / k;//ek part me min kitne nodes aayenge

        //You have to create a vector of ll ;

        vector<ListNode*>ans;//This will contain multiple ll;

        if (parts == 0) {
            //Eachh and every ll is of one element at max only. n<k

            for (int i = 0; i < k; i++) {
                if (head != NULL) {
                    ListNode* n = head->next;
                    head->next = NULL;
                    ans.push_back(head);
                    head = n;
                } else {
                    ans.push_back(NULL);
                }
            }
        } else {
            //This is for n>=k

            int count = 1;
            while (head != NULL) {
                ans.push_back(head);
                int x;
                if (ElementsRemaining > 0) {
                    x = 1;
                } else {
                    x = 0;
                }
                ElementsRemaining--;

                for (int i = 1; i < len + x; i++) {
                    head = head->next;
                }
                ListNode* n = head->next;
                head->next = NULL;
                head = n;
                count++;
                if (count == k) {
                    ans.push_back(head);
                    break;
                }
            }
        }
        return ans;
    }
};