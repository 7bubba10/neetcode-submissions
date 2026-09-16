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
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> que;
        vector<vector<int>> levels;

        if (root) que.push(root);

        while (que.size() > 0) {
            int len = que.size();
            vector<int> level;

            for (int i = 0; i < len; i++) {
                TreeNode* curr = que.front();
                que.pop();
                level.push_back(curr->val);

                if (curr->left) {
                    que.push(curr->left);
                }
                if (curr->right) {
                    que.push(curr->right);
                }
            }
            levels.push_back(level);
        }
        return levels;
        
    }
};
