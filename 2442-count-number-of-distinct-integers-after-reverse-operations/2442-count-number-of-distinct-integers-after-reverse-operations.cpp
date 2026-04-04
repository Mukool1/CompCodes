class Solution {
public:
    int reverse(int n) {
        int res = 0;
        while (n) {
            res = res * 10 + n % 10;
            n /= 10;
        }
        return res;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> res(nums.begin(), nums.end());

        for (int i : nums) {
            res.insert(reverse(i));
        }
        return res.size();
    }
};