class Solution {
public:
    void printSubsets(vector<int>nums,vector<vector<int>>&ans,vector<int>&curr,int i){
        if(i==nums.size()){
            ans.push_back(curr);return;
        }
        curr.push_back(nums[i]);
        printSubsets(nums,ans,curr,i+1);
        curr.pop_back();
        printSubsets(nums,ans,curr,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>curr;
        printSubsets(nums,ans,curr,0);
        return ans;
    }
};