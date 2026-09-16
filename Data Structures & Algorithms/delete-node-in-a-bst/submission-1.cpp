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
private:
    TreeNode* getMinNode(TreeNode* root) {
        TreeNode* curr = root;
        while(curr && curr->left){
            curr = curr->left;
        }
        return curr;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return nullptr;

        if ( key > root->val) {
            root->right = deleteNode(root->right,key);
        }
        else if ( key < root->val) {
            root->left = deleteNode(root->left,key);
        }
        else {
            if (!root->right) {
                return root->left;
            }
            else if (!root->left) {
                return root->right;
            }
            else {
                TreeNode* minNode = getMinNode(root->right);
                root->right = deleteNode(root->right,minNode->val);
                root->val = minNode->val;
            }
        }
        return root;
    }
};