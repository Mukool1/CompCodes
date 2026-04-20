class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i = 0;
        int maxDist = 0;
        for (int i = 0; i < colors.size(); i++) {
            if (colors[i] != colors[0])
                maxDist = max(maxDist, i);
            if (colors[i] != colors[colors.size() - 1])
                maxDist = max(maxDist, (int)colors.size() - 1 - i);
        }
        return maxDist;
    }
};