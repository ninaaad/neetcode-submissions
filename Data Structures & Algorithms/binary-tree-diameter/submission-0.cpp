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
    int diameterOfBinaryTree(TreeNode* root) {
        int diam = 0;
        diameter(root, diam);

        return diam;
    }

    int diameter(TreeNode* root, int& diam){
        if (root == NULL) return 0;

        int left = diameter(root->left, diam);
        int right = diameter(root->right, diam);
        diam = max(diam, left + right);

        return 1 + max(left, right);
    }
};
