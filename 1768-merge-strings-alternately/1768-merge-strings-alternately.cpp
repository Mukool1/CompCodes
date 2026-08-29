class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        int i = 0, j = 0;
        while (i != word1.size()  || j != word2.size()) {
            if (i < word1.size()) {
                s.push_back(word1[i]);
                i++;
            }
            if (j < word2.size()) {
                s.push_back(word2[j]);
                j++;
            }
        }
        return s;
    }
};