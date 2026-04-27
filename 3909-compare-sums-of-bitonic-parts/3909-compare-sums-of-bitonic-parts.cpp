class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int maxIndex=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])maxIndex=i;
        }
        long long ascending_sum=0;
        long long descending_sum=0;
        for(int i=0;i<=maxIndex;i++){
            ascending_sum+=nums[i];
        }
        for(int i=maxIndex;i<nums.size();i++){
            descending_sum+=nums[i];
        }
        if(ascending_sum>descending_sum)return 0;
        else if(ascending_sum==descending_sum)return -1;
        return 1;
    }
};