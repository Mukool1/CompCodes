class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumEven=n*(n+1);
        int sumOdd=n*n;
        while(sumOdd>0&&sumEven>0){
            if(sumEven>sumOdd){
                sumEven%=sumOdd;
            }
            else sumOdd%=sumEven;
        }
        if(sumEven==0)return sumOdd;
        return sumEven;
    }
};