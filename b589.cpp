class Solution {
public:
    vector<int> res;
    void traverse(Node* root) {
        if (!root) return;
        res.push_back(root->val);
        for (Node* child : root->children) {
            traverse(child);
        }
    }

    vector<int> preorder(Node* root) {
        traverse(root);
        return res;
    }
};