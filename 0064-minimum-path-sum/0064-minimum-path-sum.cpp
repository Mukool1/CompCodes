class Solution {
public:
    // recursion
    int solveRec(vector<vector<int>>& grid, int m, int n) {
        if (m >= grid.size() || n >= grid[0].size())
            return INT_MAX;
        if (m == grid.size() - 1 && n == grid[0].size() - 1)
            return grid[m][n];
        return grid[m][n] +
               min(solveRec(grid, m + 1, n), solveRec(grid, m, n + 1));
    }
    // memoisation
    int solveMemo(vector<vector<int>>& grid, int m, int n,
                  vector<vector<int>>& memo) {
        if (m >= grid.size() || n >= grid[0].size())
            return INT_MAX;
        if (m == grid.size() - 1 && n == grid[0].size() - 1)
            return grid[m][n];
        if (memo[m][n] != -1)
            return memo[m][n];
        return memo[m][n] = grid[m][n] + min(solveMemo(grid, m + 1, n, memo),
                                             solveMemo(grid, m, n + 1, memo));
    }
    // tabulation
    int solveTab(vector<vector<int>>& grid, int m, int n) {
        if (grid.empty())
            return 0;
        vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), 0));
        dp[0][0] = grid[0][0];
        for (int i = 1; i < grid.size(); i++) {
            dp[i][0] = dp[i - 1][0] + grid[i][0];
        }
        for (int j = 1; j < grid[0].size(); j++) {
            dp[0][j] = dp[0][j - 1] + grid[0][j];
        }
        for (int i = 1; i < grid.size(); i++) {
            for (int j = 1; j < grid[0].size(); j++) {
                dp[i][j] += grid[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[m - 1][n - 1];
    }
    int minPathSum(vector<vector<int>>& grid) {
        // vector<vector<int>>memo(grid.size(),vector<int>(grid[0].size(),-1));
        // return solveRec(grid,0,0);
        // return solveMemo(grid,0,0,memo);
        return solveTab(grid, grid.size(), grid[0].size());
    }
};