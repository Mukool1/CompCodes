class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long long bitM=n;
        if(bitM<0){
            x=1/x;
            bitM=-bitM;
        }
        while(bitM>0){
            if(bitM%2==1){
                ans*=x;
            }
            x*=x;
            bitM/=2;
        }
        return ans;
    }
};