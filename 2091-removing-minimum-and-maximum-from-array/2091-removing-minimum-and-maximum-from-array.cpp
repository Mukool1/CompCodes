class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        pair<int, int> maxm = {nums[0], 0}; 
        pair<int, int> minm = {nums[0], 0}; 
        for(int i = 1; i < nums.size(); i++){ 
            if(nums[i] > maxm.first) {
                maxm.first = nums[i];
                maxm.second = i;
            }
            if(nums[i] < minm.first) {
                minm.first = nums[i];
                minm.second = i;
            }
        }
        int n=nums.size();
        int low=min(maxm.second,minm.second);
        int high=max(maxm.second,minm.second);
        return min({n-low, high+1 ,(low+1)+(n-high)});
    }
};