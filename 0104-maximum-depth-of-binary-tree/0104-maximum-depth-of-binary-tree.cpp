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
 int  height(TreeNode*root){
    if(root==nullptr)return -1;
    int h1=height(root->left);
    int h2=height(root->right);
    return max(h1,h2)+1;
 }
class Solution {
public:
    int maxDepth(TreeNode* root) {
    return height(root)+1;
    }
};