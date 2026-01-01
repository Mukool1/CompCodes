class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countOfzero=0;
        int countOfone=0;
        int countOftwo=0;
        for(int i=0;i<nums.size();i++){
            switch(nums[i]){
            case 0 : countOfzero++;
            break;
            case 1:countOfone++;
            break;
            case 2:countOftwo++;
            break;
            }
        }
        int index=0;
        for(int i=0;i<countOfzero;i++){
            nums[index++]=0;
        }
        for(int i=0;i<countOfone;i++){
            nums[index++]=1;
        }
        for(int i=0;i<countOftwo;i++){
            nums[index++]=2;
        }
    }
};