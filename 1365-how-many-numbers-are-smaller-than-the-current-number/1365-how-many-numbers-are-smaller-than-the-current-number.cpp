class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count=0;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j] && j!=i){
                    count++;
                }
            }
            res.push_back(count);
            count=0;
        }
        return res;
    }
};