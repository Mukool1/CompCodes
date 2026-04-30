class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(nums[mid+1]<nums[mid])high=mid;
            else low=mid+1;
        }
        return low;
    }
};