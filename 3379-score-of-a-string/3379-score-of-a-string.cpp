class Solution {
public:
    int scoreOfString(string s) {
        int n=s.size();
        int sum=0;
        int diff=0;
        for(int i=1;i<n;i++){
            diff=abs(s.at(i-1)-s.at(i));
            sum+=diff;
        }
        return sum;
    }
};