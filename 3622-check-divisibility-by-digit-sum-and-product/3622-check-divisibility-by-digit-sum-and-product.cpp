class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
       int digitSum=0;
       int prodSum=1;
       while(temp){
        int digit=temp%10;
        digitSum+=digit;
        prodSum*=digit;
        temp/=10;
       } 
       return (n%(digitSum+prodSum)==0);
    }
};