class Solution {
public:
    int minOperations(string s) {
        int cost=1e9;
        for(int lr=0;lr<s.size();lr++){
            int op=lr;
            for(int i=0;i<s.size()/2;i++){
                char char1=s[i];
                char char2=s[s.size()-i-1];
                int diff=abs(char2-char1);
                diff=min(diff,26-diff);
                op+=diff;
            }
            cost=min(op,cost);
            rotate(s.begin(),s.begin()+1,s.end());
        }
        return cost;
    }
};