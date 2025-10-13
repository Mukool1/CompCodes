class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> res;
        int val=0;
        for(int i=0;i<nums.size();i++){
            val=nums.at(i);
            res.push_back(nums.at(val));
        }
        return res;
    }
};