class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mini=INT_MAX;
        int maxm=nums[0];
        int score=0;
        int ans=-1;
        vector<int>suffix_min(nums.size());
        suffix_min[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            suffix_min[i]=min(suffix_min[i+1],nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            maxm=max(maxm,nums[i]);
            int mini=suffix_min[i];
            score=maxm-mini;
            if(score<=k){
                return i;
            }
            mini=INT_MAX;
        }
        return -1;
    }
};