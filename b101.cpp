class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if ( root == NULL) return true;
        return check(root-> left , root -> right);
    }
    bool check(TreeNode* leftnode, TreeNode*rightnode){
        if (!leftnode && !rightnode) return true;
        if (!leftnode || !rightnode || leftnode -> val != rightnode -> val) 
        return false;
        return check(leftnode -> left, rightnode -> right ) && 
        check(leftnode -> right, rightnode -> left);
    }
};