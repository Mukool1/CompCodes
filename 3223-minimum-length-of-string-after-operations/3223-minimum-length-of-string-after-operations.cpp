class Solution {
public:
    int minimumLength(string s) {
        vector<int>freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        int len=0;
        for(int i:freq){
            if(i==0)continue;
            if(i%2==0)len+=2;
            else len+=1;
        }
        return len;
    }
};