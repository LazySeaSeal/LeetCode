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
    int f(TreeNode* root)
    {
        if (!root)
            return 0;
        if (root->left )
            {
                if (!root->left->left && !root->left->right) // ena leaf left
                    return ( root->left->val + f(root->right) );
            }
        return (f(root->left)+f(root->right));

    }
    int sumOfLeftLeaves(TreeNode* root) {
        return f(root);    
    }
};