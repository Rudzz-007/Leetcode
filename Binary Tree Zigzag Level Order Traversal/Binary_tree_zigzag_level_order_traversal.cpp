/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> ans;

    int levels(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }

    void nthLevel(TreeNode* root, int curr, int level, vector<int>& temp) {
        if (root == NULL)
            return;

        if (curr == level) {
            temp.push_back(root->val);
            return;
        }
        if(level%2==0){
        nthLevel(root->right, curr + 1, level, temp);
        nthLevel(root->left, curr + 1, level, temp);
        }
        else {
        nthLevel(root->left, curr + 1, level, temp);
        nthLevel(root->right, curr + 1, level, temp);
        }
    }
        vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            int n = levels(root);

            for (int i = 1; i <= n; i++) {
                vector<int> temp;
                nthLevel(root, 1, i, temp);
                ans.push_back(temp);
            }

            return ans;
        }
    };