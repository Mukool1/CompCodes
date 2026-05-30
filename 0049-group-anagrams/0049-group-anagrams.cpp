class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>anagrams;
        vector<vector<string>>res;
        for(const string&s:strs){
            string sorted=s;
            sort(sorted.begin(),sorted.end());
            anagrams[sorted].push_back(s);
        }
        for(const auto&p:anagrams){
            res.push_back(p.second);
        }
        return res;
    }
};