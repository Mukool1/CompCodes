class Solution {
public:
    void ipop(vector<int>& candidates, int target,vector<int>&curr,vector<vector<int>>&ans,map<vector<int>,int>&mp){
        if(target<0)return;
        if(target==0){
            // if(!mp.count(curr)){
                ans.push_back(curr);
                // mp[curr]++;
            // }
            return;
        }   
        for(int i=0;i<candidates.size();i++){
            vector<int>ip=candidates;
            if(i>0 && candidates[i]==candidates[i-1])continue;
            if(target<candidates[i])break;
            for(int j=0;j<=i;j++)ip.erase(ip.begin());
            curr.push_back(candidates[i]);
            ipop(ip,target-candidates[i],curr,ans,mp);
            curr.pop_back();

        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>curr;
        map<vector<int>,int>mp;
        ipop(candidates,target,curr,ans,mp);
        return ans;
    }
};