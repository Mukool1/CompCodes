class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=INT_MAX;;
        for(int i:nums){
            mini=min(mini,i);
        }
        return mini;
    }
};