class Solution {
public:
    // using recursion
    int solveRec(string text1, string text2, int i, int j) {
        if (i == text1.size() || j == text2.size())
            return 0;
        if (text1[i] == text2[j]) {
            return 1 + solveRec(text1, text2, i + 1, j + 1);
        }
        return max(solveRec(text1, text2, i + 1, j),
                   solveRec(text1, text2, i, j + 1));
    }
    //using memoization
    int solveMem(string text1, string text2, int i, int j,vector<vector<int>>&dp){
        if (i == text1.size() || j == text2.size())
            return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if (text1[i] == text2[j]) {
            dp[i][j]= 1 + solveMem(text1, text2, i + 1, j + 1,dp);
        }
        else{

        dp[i][j]= max(solveMem(text1, text2, i + 1, j,dp),
                   solveMem(text1, text2, i, j + 1,dp));
        }
        return dp[i][j];
    }
    //tabulation
    int solveTab(string text1, string text2){
        vector<vector<int>>dp(text1.size()+1,vector<int>(text2.size()+1,0));
    
        for (int i = 1; i <= text1.size(); i++) {
            for (int j = 1; j <= text2.size(); j++) {
                if (text1[i-1] == text2[j-1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[text1.size()][text2.size()];
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.size()+1,vector<int>(text2.size()+1,-1));
        // return solveRec(text1,text2,0,0);
        // return solveMem(text1,text2,0,0,dp);
        return solveTab(text1,text2);
    }
};