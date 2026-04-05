class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int ind1=-1;
        int ind2=-1;
        int res=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ind1=i;
                if(ind2!=-1){
                    res= min(abs(ind1-ind2),res);
                }
            }
            else if(nums[i]==2){
                ind2=i;
                if(ind1!=-1){
                    res= min(abs(ind1-ind2),res);
                }
            }
        }
        return res==INT_MAX?-1:res;
    }
};