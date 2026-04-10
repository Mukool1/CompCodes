class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int n = s.length();
        int len = 0;

        for (int i = 0; i < n; i++) {
            std::vector<bool> visited(256, false);
            int currLen = 0;

            for (int j = i; j < n; j++) {
                if (visited[s[j]]) {
                    break;
                }
                visited[s[j]] = true;
                currLen++;
                len = std::max(len, currLen);
            }
        }
        return len;
    }
};
