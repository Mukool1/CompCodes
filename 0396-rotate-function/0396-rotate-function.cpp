typedef long long ll;

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();

        ll sum=0;
        ll currFx=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            currFx+=(ll)i*nums[i];
        }
        ll maxSum=currFx;
        for(int i=n-1;i>0;i--){
            currFx=currFx+sum-(ll)n*(nums[i]);
            maxSum=max(maxSum,currFx);
        }
        return maxSum;
    }
};