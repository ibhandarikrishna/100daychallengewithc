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
    int depth(TreeNode* root, bool &balanced)
    {
        if(not balanced or not root)
            return 0; // anything goes for not balanced
        int dl = depth(root->left, balanced); 
        int dr = depth(root->right, balanced);
        if(abs(dl - dr) > 1)
        {
            balanced = false;
            return 0;
        }
        return 1 + max(dl, dr);
    }
public:
    bool isBalanced(TreeNode* root) {
        bool res = true;
        depth(root, res);
        return res;
    }
};
