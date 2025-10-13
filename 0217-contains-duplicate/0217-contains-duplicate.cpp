class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums.at(i - 1) == nums.at(i)) {
                return true;
            }
        }
        return false;
    }
};