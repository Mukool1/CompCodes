class Solution {
public:
    int minCost=0;
    int solve(vector<int>&cost,int n,vector<int>&dp){
        if(n==0)return cost[n];
        if(n==1)return cost[n];
        if(dp[n]!=-1)return dp[n];
        dp[n]=cost[n]+min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size()+1,-1);
        int n=cost.size();
        int ans=min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        return ans;
    }
};