class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;
        for(string s:words){
        long long mapping=0;
            for(char c:s){
                mapping+=weights[c-'a'];
            }
            ans.push_back('z'-mapping%26);
        }
        return ans;
    }
};