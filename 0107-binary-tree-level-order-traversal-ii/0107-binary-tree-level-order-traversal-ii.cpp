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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        stack<vector<int>>st;
        if (!root)
            return res;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int thisLevel = q.size();
            vector<int> currLevel;
            for (int i = 0; i < thisLevel; i++) {
                TreeNode* temp = q.front();
                q.pop();
                currLevel.push_back(temp->val);
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
            st.push(currLevel);
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        return res;
    }
};