class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count=0;
        int total_sum=0;
        for(int i=0;i<nums.size();i++){
            total_sum+=nums[i];
        }
        int sum_left=0;
        for(int i=0;i<nums.size()-1;i++){
            sum_left+=nums[i];
            int sum_right=total_sum-sum_left;
            if((sum_left-sum_right)%2==0){
                count++;
            }
        }
        return count;
    }
};