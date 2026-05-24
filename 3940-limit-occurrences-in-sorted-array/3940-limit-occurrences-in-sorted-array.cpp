class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>res;
        int remaining=k;
        for(int i=0;i<nums.size();i++){
            if(res.empty() || nums[i]!=res.back() )remaining=k;
            else{
                remaining--;
            }
            if(remaining>0){
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};