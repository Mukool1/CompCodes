class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // for(int i=0;i<s.size();i++){
        //     if(s[i]!=t[i]){
        //         return false;
        //     }
        // }
        // return true;
        vector<int>freq(26,0);
        for(char c : s){
            freq[c-'a']++;
        }
        for(char c : t){
            freq[c-'a']--;
        }
        for(int i=0;i<26;i++){
            if(freq[i]!=0)return false;
        }
        return true;
    }
};