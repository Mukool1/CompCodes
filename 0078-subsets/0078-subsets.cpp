class Solution {
public:
    //backtracking
    void backtrack(vector<int>nums,vector<vector<int>>&ans,vector<int>&curr,int i){
        if(i==nums.size()){
            ans.push_back(curr);return;
        }
        curr.push_back(nums[i]);
        backtrack(nums,ans,curr,i+1);
        curr.pop_back();
        backtrack(nums,ans,curr,i+1);
    }
    //i/p o/p
    void ipop(vector<int>&nums,vector<vector<int>>&ans,vector<int>&curr){
        ans.push_back(curr);
        if(nums.size()==0)return;
        for(int i=0;i<nums.size();i++){
            vector<int>ip(nums),op(curr);
            op.push_back(nums[i]);

            for(int j=0;j<=i;j++){
                ip.erase(ip.begin());
            }
            ipop(ip,ans,op);
        }

    }
    vector<vector<int>> subsets(vector<int>& nums) { 
        vector<vector<int>>ans;
        vector<int>curr;
        backtrack(nums,ans,curr,0);
        // ipop(nums,ans,curr);
        // sort(ans.begin(),ans.end());
        return ans;
    }
};