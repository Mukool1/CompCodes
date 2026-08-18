class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        if (k == 1) {
            unordered_map<int, int> freq;
            for (int i = 0; i < n; i++)
                freq[nums[i]]++;
            int ans = -1;
            for (auto& p : freq) {
                if (p.second == 1) {
                    ans = max(ans, p.first);
                }
            }
            return ans;
        }
        if (k == n) {
            int ans = -1;
            unordered_map<int, int> freq;
            for (int i = 0; i < n; i++)
                freq[nums[i]]++;
            for (auto& p : freq) {
                ans = max(ans, p.first);
            }
            return ans;
        }

        unordered_map<int, int> freq;
        for (int i : nums)
            freq[i]++;

        if (freq[nums[0]] == 1 && freq[nums[n - 1]] == 1)
            return max(nums[0], nums[n - 1]);
        else if (freq[nums[0]] == 1 && freq[nums[n - 1]] != 1)
            return nums[0];
        else if (freq[nums[0]] != 1 && freq[nums[n - 1]] == 1)
            return nums[n - 1];
        else
            return -1;
    }
};
