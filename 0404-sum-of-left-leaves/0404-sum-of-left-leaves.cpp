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
 void sum_leaf(TreeNode*root,vector<int> &res){
    if(root==nullptr) return;
    if (root->left !=nullptr && root->left->right==nullptr && root->left->left==nullptr) {
        res.push_back(root->left->val);
    }
    sum_leaf(root->left,res);
    sum_leaf(root->right,res);
 }
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        vector<int> res;
        sum_leaf(root,res);
        int sum=0;
        for(int a:res){
            sum+=a;
        }
        return sum;
    }
};