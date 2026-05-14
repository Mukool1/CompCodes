class Solution {
public:
    //memoisation
    // int minCost=0;
    // int solve(vector<int>&cost,int n,vector<int>&dp){
    //     if(n==0)return cost[n];
    //     if(n==1)return cost[n];
    //     if(dp[n]!=-1)return dp[n];
    //     dp[n]=cost[n]+min(solve(cost,n-1,dp),solve(cost,n-2,dp));
    //     return dp[n];
    // }
    //tabulation
    // int solve(int n,vector<int>&cost){
    //     vector<int>dp(n+1,-1);
    //     dp[0]=cost[0];
    //     dp[1]=cost[1];
    //     for(int i=2;i<cost.size();i++){
    //         dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
    //     }
    //     return min(dp[n-1],dp[n-2]);
    // }
    //tabulation with space optimization
    int solve(int n,vector<int>&cost){
        int prev1=cost[0];
        int prev2=cost[1];
        for(int i=2;i<cost.size();i++){
            int curr=min(prev1,prev2)+cost[i];
            prev1=prev2;
            prev2=curr;
        }
        return min(prev1,prev2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        // vector<int>dp(cost.size()+1,-1);
        int n=cost.size();
        // int ans=min(solve(cost,n-1,dp),solve(cost,n-2,dp));

        return solve(n,cost);
    }
};