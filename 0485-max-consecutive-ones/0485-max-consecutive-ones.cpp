class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int tempCount = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 1) {
                count = max(count, tempCount);
                tempCount=0;
            } else {
                tempCount++;
            }
        }
        count = max(count, tempCount);
        return count;
    }
};