class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int count=0;
        for(int i=1;i<n;i++){
            if(nums.at(i)!=nums.at(j)){
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
    }
};