class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romans;
        romans['I'] = 1;
        romans['V'] = 5;
        romans['X'] = 10;
        romans['L'] = 50;
        romans['C'] = 100;
        romans['D'] = 500;
        romans['M'] = 1000;
        int res = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (romans[s[i]] < romans[s[i + 1]]) {
                res -= romans[s[i]];
            } else {
                res += romans[s[i]];
            }
        }
        return res + romans[s[s.size() - 1]];
    }
};