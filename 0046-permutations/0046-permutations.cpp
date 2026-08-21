class Solution {
public:
    void ipop(vector<int>& nums, vector<int>& curr, vector<vector<int>>& ans) {
        if (nums.size() == 0) {
            ans.push_back(curr);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            vector<int> ip(nums), op(curr);
            op.push_back(nums[i]);
            ip.erase(ip.begin()+i);
            ipop(ip, op,ans);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        ipop(nums, curr, ans);
        return ans;
    }
};