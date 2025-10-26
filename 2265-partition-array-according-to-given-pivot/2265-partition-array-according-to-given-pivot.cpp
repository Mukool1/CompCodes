class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> res;
        res.reserve(n);
        for (int i : nums) {
            if (i < pivot) {
                res.push_back(i);
            }
        }
        for (int i : nums) {
            if (i == pivot) {
                res.push_back(i);
            }
        }
        for (int i : nums) {
            if (i > pivot) {
                res.push_back(i);
            }
        }
        return res;
    }
};