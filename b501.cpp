class Solution {
public:
    vector<int> res;
    int maxFreq = 0, currFreq = 0, currVal = 0;

    void handleValue(int val) {
        if (val != currVal) {
            currVal = val;
            currFreq = 0;
        }
        currFreq++;
        if (currFreq > maxFreq) {
            maxFreq = currFreq;
            res = {val};
        } else if (currFreq == maxFreq) {
            res.push_back(val);
        }
    }

    void inorder(TreeNode* root) {
        if (!root) return;
        inorder(root->left);
        handleValue(root->val);
        inorder(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return res;
    }
};