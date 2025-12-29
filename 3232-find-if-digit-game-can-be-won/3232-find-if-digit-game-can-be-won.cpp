class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleSum=0;
        int doubleSum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                singleSum+=nums[i];
            }
            else{
                doubleSum+=nums[i];
            }
        }
        return doubleSum!=singleSum;
    }
};