class Solution {
public:
    int memo[101][101];
    // recursion
    int solveRec(int currRow, int currCol) {

        if (currRow == 0 && currCol == 0) {
            return 1;
        }
        if (currRow < 0 || currCol < 0) {
            return 0;
        }
        return solveRec(currRow - 1, currCol) + solveRec(currRow, currCol - 1);
    }
    // memoisation
    int solveMemo(int currRow, int currCol) {
        if (currRow == 0 && currCol == 0) {
            return 1;
        }
        if (currRow < 0 || currCol < 0) {
            return 0;
        }
        if (memo[currRow][currCol] != -1)
            return memo[currRow][currCol];
        return memo[currRow][currCol] = solveMemo(currRow - 1, currCol) +
                                        solveMemo(currRow, currCol - 1);
    }
    // tabulation
    int solveTab(int currRow, int currCol) {
        vector < vector < int >> dp(currRow, vector<int>(currCol, 1));
        for (int i = 1; i < currRow; i++) {
            for (int j = 1; j < currCol; j++) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[currRow-1][currCol-1];
    }
    int uniquePaths(int m, int n) {
        memset(memo, -1, sizeof(memo));
        // return solveRec(m - 1, n - 1);
        // return solveMemo(m-1,n-1);
        return solveTab(m , n );
    }
};