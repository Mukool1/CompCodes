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
 void pre(TreeNode* p,vector<int>&res){
    if(p==nullptr){
        res.push_back(INT_MIN);
        return;
    }
        res.push_back(p->val);
        pre(p->left,res);
        pre(p->right,res);
 }
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> res1;
        vector<int> res2;
        pre(p,res1);
        pre(q,res2);
        if(res1.size()!=res2.size()){
            return false;
        }
        for(int i=0;i<res1.size();i++){
            if(res1[i]!=res2[i]){
                return false;
            }
        }
        return true;
    }
};