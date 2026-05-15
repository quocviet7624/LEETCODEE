class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (!root) return 0;
        int res = 0;
        if (root->left && !root->left->left && !root->left->right) {
            res += root->left->val;
        }
        return res + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};