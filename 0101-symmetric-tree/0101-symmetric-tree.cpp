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
    bool f(TreeNode* l,TreeNode* r)
    {
        
        if (l && r)
        {   
            return (l->val==r->val && f(l->left,r->right) && f(r->left,l->right));
        }
        else if (!l && !r)
            return true;
        return false;

    }


    bool isSymmetric(TreeNode* root) {
        if(!root)
            return false;
        return(f(root->left,root->right));     
    }
};