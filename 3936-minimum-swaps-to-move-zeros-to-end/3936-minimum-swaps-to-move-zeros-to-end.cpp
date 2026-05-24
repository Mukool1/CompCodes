class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int count=0;
        while(i<j){
            while(i<j && nums[i]!=0)i++;
            while(i<j && nums[j]==0)j--;
            if(i<j){
                swap(nums[i],nums[j]);
                count++;
                i++;
                j--;
            }
        }
        return count;
    }
};