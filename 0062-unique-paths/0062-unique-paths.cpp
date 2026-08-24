class Solution {
public:
    int uniquePaths(int m, int n) {
        int path=m+n-2;
        int minRowCol=min(m-1,n-1);
        long long res=1;
        for (int i = 1; i <= minRowCol; i++) {
            res = res * (path - minRowCol + i) / i;
        }
        return (int)res;
    }
};