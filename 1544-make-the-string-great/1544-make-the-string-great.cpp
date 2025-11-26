class Solution {
public:
    string makeGood(string s) {
        int n=s.size();
        if(n==1){
            return s;
        }
        for(int i=1;i<n;i++){
            if(abs(s[i-1] - s[i]) == 32){
                s.erase(i-1,2);
                i = max(0, i-2);
            }
        }
        return s;
    }
};