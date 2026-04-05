class Solution {
public:
    bool judgeCircle(string moves) {
        int up=0,down=0,left=0,right=0;
        for(char c:moves){
            if(c=='U')up++;
            else if(c=='L')left++;
            else if(c=='R')right++;
            else down++;
        }
        return (up==down)&&(left==right);
    }
};