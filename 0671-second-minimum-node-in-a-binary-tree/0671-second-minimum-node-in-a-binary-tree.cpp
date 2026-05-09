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
    void inorder(TreeNode*root,set<int>&help){
        if(!root)return;
        inorder(root->left,help);
        help.insert(root->val);
        inorder(root->right,help);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int>help;
        inorder(root,help);
        if (help.size() < 2) return -1;
        auto it=help.begin();
        return *next(it);
    }
};