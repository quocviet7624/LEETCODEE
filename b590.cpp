class Solution {
public:
    vector<int> res;
    void traverse(Node* root) {
        if (!root) return;
        for (Node* child : root->children) {
            traverse(child);
        }
        res.push_back(root->val);
    }

    vector<int> postorder(Node* root) {
        traverse(root);
        return res;
    }
};