class Solution {
public:

    int sumOfDigit(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int least=INT_MAX;
        for(int i=0;i<nums.size();i++){
            least=min(least,sumOfDigit(nums[i]));
        }
        return least;
    }
};