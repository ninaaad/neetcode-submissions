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
    bool isBalanced(TreeNode* root) {
        if (root == NULL) return true;

        return checkhgt(root) != -1;
    }

    int checkhgt(TreeNode* node){
        if (node == NULL) return 0;

        int l = checkhgt(node->left);
        if (l == -1) return -1;
        int r = checkhgt(node->right);
        if ( r == -1) return -1;

        if (abs(l-r) > 1) return -1;
        return max (l, r) + 1;
    }
};
