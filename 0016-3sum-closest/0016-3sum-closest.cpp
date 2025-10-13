class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int currentSum = 0;
        int closestSum = nums.at(0) + nums.at(1) + nums.at(2);
        for (int i = 0; i <= n - 3; i++) {
            if (i > 0 && nums.at(i) == nums.at(i - 1)) {
                continue;
            }
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                currentSum = nums[i] + nums[left] + nums[right];

                if (abs(currentSum - target) < abs(closestSum - target)) {
                    closestSum = currentSum;
                }
                if (currentSum < target) {
                    left++;
                } else if (currentSum > target) {
                    right--;
                } else {
                    return currentSum;
                }
            }
        }
        return closestSum;
    }
};