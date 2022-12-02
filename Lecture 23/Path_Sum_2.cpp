/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    vector<int>path;
    vector<vector<int>>ans;

    void FindPath(TreeNode* root, int sum) {
        if (root == NULL) {
            return;
        }

        path.push_back(root->val);

        if (root->val == sum and !root->left and !root->right) {
            //Ek path tumko mil gaya:
            ans.push_back(path);
            //2-d vector me ek poore row ko daal raha hu
        } else {
            FindPath(root->left, sum - root->val);
            FindPath(root->right, sum - root->val);
        }
        path.pop_back();//Because i want all the path;
    }

public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        FindPath(root, targetSum);
        return ans;
    }
};



//map, priority queue and set
//stack and Queues



//DP: spend :

//  prein    post pre   and in post and LCA:
//Assignment update: try karlena
//Vertical Order:
