class Solution {
public:
int memo[101][101];
    int solve(int currRow,int currCol){
        if(currRow==0 && currCol==0){
            return 1;
        }
        if(currRow<0 || currCol<0){
            return 0;
        }
        if(memo[currRow][currCol]!=-1)return memo[currRow][currCol];
        return memo[currRow][currCol]=solve(currRow-1,currCol)+solve(currRow,currCol-1);
    }
    int uniquePaths(int m, int n) {
        memset(memo, -1, sizeof(memo));
        return solve(m-1,n-1);
    }
};