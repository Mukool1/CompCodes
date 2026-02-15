class Solution {
public:

    void combiSum(vector<int>& candidates,int i, int target,vector<int>&comb,vector<vector<int>>&ans){
        if(i==candidates.size()||target<0)return;
        if(target==0){
            ans.push_back(comb);
            return;
        }
        comb.push_back(candidates[i]);
        combiSum(candidates,i,target-candidates[i],comb,ans);
        comb.pop_back();
        combiSum(candidates,i+1,target,comb,ans);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>comb;
        combiSum(candidates,0,target,comb,ans);
        return ans;
    }
};