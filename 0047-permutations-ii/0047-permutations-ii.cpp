class Solution {
public:
    void ipop(vector<int>& nums, vector<int>& curr, vector<vector<int>>& ans,map<vector<int>,int>&mp) {
        if (nums.size() == 0) {
            if(!mp.count(curr)){
            ans.push_back(curr);
            mp[curr]++;
            }
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            vector<int> ip(nums), op(curr);
            op.push_back(nums[i]);
            ip.erase(ip.begin()+i);
            ipop(ip, op,ans,mp);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>curr;
        vector<vector<int>>ans;
        map<vector<int>,int>mp;
        
        ipop(nums,curr,ans,mp);
        return ans;
    }
};