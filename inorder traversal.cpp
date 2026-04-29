vector<int> result;

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        result.clear();
        resultt(root);
        return result;
    }

    void resultt(TreeNode* root) {
        if (!root) return;

        resultt(root->left);
        result.push_back(root->val);
        resultt(root->right);
    }
};