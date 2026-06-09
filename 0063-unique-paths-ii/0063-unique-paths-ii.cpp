class Solution {
public:
    // recursion
    int solveRec(vector<vector<int>>& obstacleGrid, int m, int n) {
        if (m > obstacleGrid.size() - 1 || n > obstacleGrid[0].size() - 1) {
            return 0;
        }
        if (obstacleGrid[m][n] == 1)
            return 0;
        if (m == obstacleGrid.size() - 1 && n == obstacleGrid[0].size() - 1) {
            return 1;
        }
        return solveRec(obstacleGrid, m + 1, n) +
               solveRec(obstacleGrid, m, n + 1);
    }
    // memoisation
    int solveMemo(vector<vector<int>>& obstacleGrid, int m, int n,
                  vector<vector<int>>& memo) {
        if (m > obstacleGrid.size() - 1 || n > obstacleGrid[0].size() - 1) {
            return 0;
        }
        if (obstacleGrid[m][n] == 1)
            return 0;
        if (m == obstacleGrid.size() - 1 && n == obstacleGrid[0].size() - 1) {
            return 1;
        }
        if (memo[m][n] != -1)
            return memo[m][n];
        return memo[m][n] = solveMemo(obstacleGrid, m + 1, n,memo) +
                            solveMemo(obstacleGrid, m, n + 1,memo);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int rows = obstacleGrid.size();
        int cols = obstacleGrid[0].size();

        vector<vector<int>> memo(rows, vector<int>(cols, -1));
        // return solveRec(obstacleGrid,0,0);
        return solveMemo(obstacleGrid, 0, 0, memo);
    }
};