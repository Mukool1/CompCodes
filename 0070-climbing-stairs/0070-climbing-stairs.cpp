class Solution {
public:
    int climbStairs(int n) {
        if(n==1||n==2||n==3){
            return n;
        }
        int n1=2;
        int n2=3;
        int nth=0;
        for(int i=3;i<n;i++){
            nth=n1+n2;
            n1=n2;
            n2=nth;
        }
        return nth;
    }
};