class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> res;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int count = 1;
            while (i + 1 < n && nums[i] == nums[i + 1]) {
                count++;
                i++;
            }
            if (count > n / 3) {
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};
