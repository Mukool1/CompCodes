class Solution {
public:
    void solve(vector<int>& candidates, int target,vector<int>&curr,vector<vector<int>>&res,int i){
        if(target==0){
            res.push_back(curr);
            return;
        }
        for(int j=i;j<candidates.size();j++){
            if(j > i && candidates[j] == candidates[j - 1]) continue;
            if (candidates[j] > target) break;
            curr.push_back(candidates[j]);
            solve(candidates,target-candidates[j],curr,res,j+1);
            curr.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>curr;
        sort(candidates.begin(), candidates.end());
        solve(candidates,target,curr,res,0);
        return res;
    }
};