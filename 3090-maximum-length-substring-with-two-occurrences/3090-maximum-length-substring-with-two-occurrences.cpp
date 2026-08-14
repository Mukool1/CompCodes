class Solution {
public:
    int maximumLengthSubstring(string s) {
        int count[26]={0};
        int maxLen=0,left=0;
        for(int right=0;right<s.size();right++){
            char right_char=s[right]-'a';
            count[right_char]++;
            while(count[right_char]>2){
                char left_char=s[left]-'a';
                count[left_char]--;
                left++;
            }
            maxLen=max(maxLen,right-left+1);
        }
        return maxLen;
    }
};