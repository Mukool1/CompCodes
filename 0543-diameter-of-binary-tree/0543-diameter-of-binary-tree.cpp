/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root) {
        if (root == nullptr)
            return 0;
        int h1 = height(root->left);
        int h2 = height(root->right);
        return max(h1, h2) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root)
            return 0;
        int leftDiam = diameterOfBinaryTree(root->left);
        int rightDiam = diameterOfBinaryTree(root->right);
        int currDiam=height(root->left)+height(root->right);
        return max(currDiam,max(rightDiam,leftDiam));
    }
};