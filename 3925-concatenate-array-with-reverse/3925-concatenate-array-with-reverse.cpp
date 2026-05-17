class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int j=nums.size()-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(nums[j--]);
        }
        return nums;
    }
};