class Solution {
public:

    void orderTree(TreeNode* root, vector<int>& v) {
        
        if (root==NULL) return;

        orderTree(root->left, v);
        v.push_back(root->val);
        orderTree(root->right, v);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        orderTree(root, v);
        return v;
    }
};
