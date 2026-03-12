class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        int n = nums.size();
        int len = 0;
        for (const string& s : nums) {
            len = max(len, (int)s.length());
        }
        vector<pair<string, int>> help(n);
        for (int i = 0; i < n; ++i) {
            string s = nums[i];
            string p = string(len - s.length(), '0') + s;
            help[i] = {p, i};
        }
        sort(help.begin(), help.end());
        int indx = help[n - k].second;
        return nums[indx];
    }
};
