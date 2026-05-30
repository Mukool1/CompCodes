class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
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
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>res;
        res.push_back(words[0]);
        for(int i=1;i<words.size();i++){
            if(!isAnagram(words[i],res.back()))res.push_back(words[i]);
        }
        return res;
    }
};