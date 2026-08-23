class Solution {
public:
    int solve(int n,int copy,int paste){
        if(n==0){
            return 0;
        }
        n=n-paste;
        copy+=paste;
        if(n%copy==0){
            paste=copy;
            return solve(n,copy,paste)+2;
        }
        return solve(n,copy,paste)+1;
    }
    int minSteps(int n) {
        int copy = 1;
        n -= 1;
        if (n == 0) {
            return 0;
        }
        return solve(n, copy, 1);
    }
};