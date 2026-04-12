class Solution {
public:
    int next(int u,int v){
        return u-v+1;
    }
    int minOperations(vector<int>& nums) {
        int op=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>=nums[i]){
                op+=next(nums[i-1],nums[i]);
                nums[i]+=next(nums[i-1],nums[i]);
            }
        }
        return op;
    }
};