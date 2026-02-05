class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minNum=INT_MAX,maxNum=INT_MIN;
        for(int i:nums){
            minNum=min(minNum,i);
            maxNum=max(maxNum,i);
        }
        int gcd=1;
        for(int i=1;i<=minNum;i++){
            if(minNum%i==0&&maxNum%i==0)gcd=i;
        }
        return gcd;
    }
};