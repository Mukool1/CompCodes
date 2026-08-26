class Solution {
public:
    bool isBeautiful(string sub, int k) {
        int count = 0;
        for (int i = 0; i < sub.size(); i++) {
            if ((sub[i] - '0') == 1)
                count++;
        }
        return k == count;
    }
    string shortestBeautifulSubstring(string s, int k) {
        set<string> res;
        for (int i = 0; i < s.size(); i++) {
            for (int len = 1; len <= s.size() - i; len++) {
                string str = s.substr(i, len);
                if (isBeautiful(str, k))
                    res.insert(str);
            }
        }
        if (res.empty())
            return "";
        string shortest = "";
        int minLen = s.size() + 1;

        for (const string& str : res) {
            if (str.size() < minLen) {
                minLen = str.size();
                shortest = str;
            }
        }

        return shortest;
    }
};