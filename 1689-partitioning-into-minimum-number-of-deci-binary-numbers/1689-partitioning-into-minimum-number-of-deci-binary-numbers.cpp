class Solution {
public:
    int minPartitions(string n) {
        int maxNum=0;
        for(char c:n){
            maxNum=max(maxNum,c-'0');
        }
        return maxNum;
    }
};