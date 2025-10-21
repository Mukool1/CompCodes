class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long temp=0;
        int for_check=x;
        while(x!=0){
            int digit=x%10;
            temp=temp*10+digit;
            x/=10;
        }
        return for_check==int(temp);
    }
};