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
public:
    bool f(TreeNode* root)
    {
     if ((root->val)<=1)
                return root->val;       
            if (root->val ==2) // or
                    return (f(root->left) || f(root->right));
            return (f(root->left) && f(root->right));
    }
    bool evaluateTree(TreeNode* root) {
        return f(root);
    }
};