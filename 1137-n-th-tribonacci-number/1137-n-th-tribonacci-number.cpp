class Solution {
public:
    int val(int n,vector<int>&dp){
        if(n==0||n==1)return n;
        if(n==2)return 1;
        if(dp[n]!=-1)return dp[n];
        dp[n]=val(n-1,dp)+val(n-2,dp)+val(n-3,dp);
        return dp[n];
    }
    int tribonacci(int n) {
        vector<int>dp(n+1,-1);
        return val(n,dp);
    }
};