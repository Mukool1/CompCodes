class Solution {
public:
    //recursion
    int solveRec(vector<vector<int>>& grid,int m,int n){
        if(m>=grid.size() || n>=grid[0].size())return INT_MAX;
        if(m==grid.size()-1 && n==grid[0].size()-1)return grid[m][n];
        return grid[m][n]+min(solveRec(grid,m+1,n),solveRec(grid,m,n+1));
    }
    //memoisation
    int solveMemo(vector<vector<int>>& grid,int m,int n,vector<vector<int>>&memo){
        if(m>=grid.size() || n>=grid[0].size())return INT_MAX;
        if(m==grid.size()-1 && n==grid[0].size()-1)return grid[m][n];
        if(memo[m][n]!=-1)return memo[m][n];
        return memo[m][n]=grid[m][n]+min(solveMemo(grid,m+1,n,memo),solveMemo(grid,m,n+1,memo));
    }
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>memo(grid.size(),vector<int>(grid[0].size(),-1));
        // return solveRec(grid,0,0);
        return solveMemo(grid,0,0,memo);
    }
};