class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==2){
            return (nums[0]-1)*(nums[1]-1);
        }
        int maxPro=INT_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                maxPro=max((nums[i]-1)*(nums[j]-1),maxPro);
            }
        }
        return maxPro;
    }
};