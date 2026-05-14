class Solution {
public:
//recursion
    int solve(vector<int>& coins, int amount) {
        if (amount < 0) {
            return INT_MAX;
        }
        if (amount == 0)
            return 0;
        int mini = INT_MAX;
        for (int i : coins) {
            int ans = solve(coins, amount - i);
            if (ans != INT_MAX)
                mini=min(mini, 1 + ans);
        }
        return mini;
    }
//memoisation
    int solveMemo(vector<int>& coins, int amount,vector<int>&dp){
        if (amount < 0) {
            return INT_MAX;
        }
        if (amount == 0)
            return 0;
        if(dp[amount]!=-1)return dp[amount];
        int mini = INT_MAX;
        for (int i : coins) {
            int ans = solveMemo(coins, amount - i,dp);
            if (ans != INT_MAX)
                mini=min(mini, 1 + ans);
        }
        dp[amount]=mini;
        return mini;
    }
//tabulation
    int solveTab(vector<int>& coins, int amount){
        vector<int>dp(amount+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            for(int j=0;j<coins.size();j++){
                if(i-coins[j]>=0 && dp[i-coins[j]]!=INT_MAX)
                dp[i]=min(dp[i],1+dp[i-coins[j]]);
            }
        }
        return dp[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        // int ans=solve(coins, amount);
        // if(ans!=INT_MAX)return ans;
        // return -1;
        vector<int>dp(amount+1,-1);
        int ans=solveMemo(coins,amount,dp);
        if(ans!=INT_MAX)return ans;
        return -1;
    }   
};