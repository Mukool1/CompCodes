int dp[13][10005];

class Solution {
public:
//recursion 
int rec(vector<int>&coins,int amount,int indx){
    if(amount==0)return 0;
    if(amount<0 || indx>=coins.size())return 1e9;
    int take=1+rec(coins,amount-coins[indx],indx);
    int nt=rec(coins,amount,indx+1);
    return min(take,nt);
}
//memoisation
int memo(vector<int>&coins,int amount,int indx){
    if(amount==0)return 0;
    if(amount<0 || indx>=coins.size())return 1e9;
    if(dp[indx][amount]!=-1)return dp[indx][amount];
    int take=1+memo(coins,amount-coins[indx],indx);
    int nt=memo(coins,amount,indx+1);
    return dp[indx][amount]=min(take,nt);
}
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        // int ans=rec(coins,amount,0);
        int ans=memo(coins,amount,0);
        return ans==1e9?-1:ans;
    }   
};