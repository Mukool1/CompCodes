class Solution {
public:
//recursion
    int rec(int n, vector<int>& costs,int stair ){
        if(stair==n)return 0;
        if(stair>n)return INT_MAX;
        int ans=INT_MAX;
        if(stair+1<=n){
            ans=min(ans,rec(n,costs,stair+1)+costs[stair+1]+1);
        }
        if(stair+2<=n){
            ans=min(ans,rec(n,costs,stair+2)+costs[stair+2]+4);
        }
        if(stair+3<=n){
            ans=min(ans,rec(n,costs,stair+3)+costs[stair+3]+9);
        }

        return ans;
    }
//memoisation
    int solveMem(int n, vector<int>& costs,int stair,vector<int>&dp){
        if(stair==n)return 0;
        if(stair>n)return INT_MAX;
        if(dp[stair]!=-1)return dp[stair];
        int ans=INT_MAX;
        if(stair+1<=n){
            ans=min(ans,solveMem(n,costs,stair+1,dp)+costs[stair+1]+1);
        }
        if(stair+2<=n){
            ans=min(ans,solveMem(n,costs,stair+2,dp)+costs[stair+2]+4);
        }
        if(stair+3<=n){
            ans=min(ans,solveMem(n,costs,stair+3,dp)+costs[stair+3]+9);
        }
        return dp[stair]=ans;
    }
    int climbStairs(int n, vector<int>& costs) {
        costs.insert(costs.begin(),0);
        vector<int>dp(costs.size()+1,-1);
        // return rec(n,costs,0);
        return solveMem(n,costs,0,dp);
    }
};