class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        if (nums.empty()) return 1;
        unordered_set<int> set(nums.begin(), nums.end());
        long long avg = 0;
        for (int i : nums) {
            avg += i;
        }
        long long start = (avg / (long long)nums.size()) + 1;
        if (start < 1) start = 1;
        while (set.find((int)start) != set.end()) {
            start++;
        }
        return (int)start;
    }
};
