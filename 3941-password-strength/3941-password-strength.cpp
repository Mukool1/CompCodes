class Solution {
public:
    int passwordStrength(string password) {
        bool seen[256] = {false}; 
        int score = 0;
        for (char c : password) {
            char idx = static_cast<unsigned char>(c);
            if (!seen[idx]) {
                seen[idx] = true;
                if (idx >= '0' && idx <= '9') score += 3;
                else if (idx >= 'A' && idx <= 'Z') score += 2;
                else if (idx >= 'a' && idx <= 'z') score += 1;
                else score += 5;
            }
        }
        return score;
    }
};
