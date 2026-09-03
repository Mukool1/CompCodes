class Solution {
public:
int maxOr=0;
int count=0;
    void ipop(vector<int>&nums,vector<int>&curr){
        int currOr=0;
        for(int i:curr){
            currOr|=i;
        }
        if(currOr==maxOr)count++;
        if(nums.size()==0)return;
        for(int i=0;i<nums.size();i++){
            vector<int>ip(nums),op(curr);
            op.push_back(nums[i]);
            for(int j=0;j<=i;j++){
                ip.erase(ip.begin());
            }
            ipop(ip,op);
        }
    }
    int countMaxOrSubsets(vector<int>& nums) {
        for(int i:nums){
            maxOr|=i;
        }
        vector<int>curr;
        ipop(nums,curr);
        return count;
    }
};