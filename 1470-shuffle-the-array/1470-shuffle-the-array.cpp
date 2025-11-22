class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> num1;
        int j=0;
        int k=n;
        for(int i=0;i<2*n;i++){
            if(i%2==0){
                num1.push_back(nums[j]);
                j++;
            }
            else{
                num1.push_back(nums[k]);
                k++;
            }
        }
        return num1;
    }
};