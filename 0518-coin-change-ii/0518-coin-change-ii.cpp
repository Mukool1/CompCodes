int memo[301][5001];

class Solution {
public:
//Recursion will throw tle
    int rec(int target, vector<int>&coins,int i){
        if(target==0)return 1;
        if(target<0 || i>=coins.size())return 0;
        return rec(target-coins[i],coins,i)+rec(target,coins,i+1);
    }
//memoisation
    int mem(int target,vector<int>&coins,int i){
        if(target==0)return 1;
        if(target<0 || i>=coins.size())return 0;
        if(memo[i][target]!=-1)return memo[i][target];
        return memo[i][target]=mem(target-coins[i],coins,i)+mem(target,coins,i+1);
    }
    int change(int target, vector<int>& coins) {
        memset(memo,-1,sizeof(memo));
        // return rec(target,coins,0);
        return mem(target,coins,0);
    }
};