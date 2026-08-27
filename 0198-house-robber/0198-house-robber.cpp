
class Solution {
public:
    int rec(int i,vector<int>&nums){
        if(i<0)return 0;
        if(i==0)return nums[0];
        int rob=nums[i]+rec(i-2,nums);
        int skip=rec(i-1,nums);
        return max(rob,skip);
    }
    // int memo(vector<int>&dp,int i,vector<int>&nums){
    //     if(i<0)return 0;
    //     if(i==0)return nums[0];
    //     if(dp[i]!=-1)return dp[i];
    //     return dp[i]=max(nums[i]+memo(dp,i-2,nums),memo(dp,i-1,nums));
    // }
    int tab(vector<int>&nums){
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];
        vector<int>dp(nums.size(),0);
        dp[0]=nums[0];
        dp[1]=max(nums[1],nums[0]);

        for(int i=2;i<nums.size();i++){
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }

        return dp[nums.size()-1];
        
    }
    int rob(vector<int>& nums) {
        // if(nums.size()<=1)return nums[0];
        // vector<int>dp(nums.size()+1);
        // dp[0]=nums[0];
        // dp[1]=max(nums[1],nums[0]);
        // for(int i=2;i<nums.size();i++){
        //     // maxRob=max(robCurr,robPrev+nums[i]);
        //     dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        // }
        // return dp[nums.size()-1];
        // vector<int>dp(nums.size(),-1);
        // return rec(nums.size()-1,nums);
        // return memo(dp,nums.size()-1,nums);
        return tab(nums);
    }
};