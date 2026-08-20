class Solution {
public:
    void solve(vector<int>&nums,vector<vector<int>>&ans,map<vector<int>,int>&mp,int indx){
        if(indx==nums.size()){
            if(!mp.count(nums)){
                ans.push_back(nums);
                mp[nums]++;
                
            }
            return;
        }
        for(int i=indx;i<nums.size();i++){
            swap(nums[i],nums[indx]);
            solve(nums,ans,mp,indx+1);
            swap(nums[i],nums[indx]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        // vector<int>curr;
        vector<vector<int>>ans;
        map<vector<int>,int>mp;
        
        solve(nums,ans,mp,0);
        return ans;
    }
};