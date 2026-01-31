class Solution {
public:
    bool sumGame(std::string num) {
        int n = num.length();
        double diffSum = 0;
        int diffQ = 0;

        for (int i = 0; i < n; ++i) {
            if (i < n / 2) {
                if (num[i] == '?') diffQ++;
                else diffSum += (num[i] - '0');
            } else {
                if (num[i] == '?') diffQ--;
                else diffSum -= (num[i] - '0');
            }
        }
        return diffSum != -(double)diffQ * 4.5;
    }
};
