class Solution {
public:
    int smallestNumber(int n) {
        int num=1;
        while(num<=n){
            num<<=1;
        }
        return num-1;
    }
};