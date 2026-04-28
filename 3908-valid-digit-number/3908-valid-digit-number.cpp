class Solution {
public:
    bool validDigit(int n, int x) {
        bool contain=false;
        while(n){
            if(n%10==x)contain=true;
            if(n<=9 && n==x)return false;
            n/=10;
        }
        return contain;
    }
};