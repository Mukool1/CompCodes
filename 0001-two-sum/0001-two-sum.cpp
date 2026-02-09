class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>up;
        for(int i=0;i<nums.size();i++){
            int firs=nums[i];
            int sec=target-firs;
            if(up.find(sec)!=up.end())return {i,up[sec]};
            up[firs]=i;
        }
        return {-1,-1};
    }
};