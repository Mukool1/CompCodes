class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        vector<int>freq(101,0);
        for(int n:nums){
            freq[n]++;
        }
        return freq[nums[nums.size()/2]]==1;
    }
};