class Solution {
public:
    int totalTilt = 0;

    int sum(TreeNode* node) {
        if (!node) return 0;
        int left = sum(node->left);
        int right = sum(node->right);
        totalTilt += abs(left - right);
        return node->val + left + right;
    }

    int findTilt(TreeNode* root) {
        sum(root);
        return totalTilt;
    }
};