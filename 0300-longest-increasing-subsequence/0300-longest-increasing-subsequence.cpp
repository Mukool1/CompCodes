int memo[2501][2501];

class Solution {
public:
 int solveMemo(vector<int>&nums,int i,int prev){
    if(i>=nums.size()){
        return 0;
    }
    if(memo[i][prev+1]!=-1)return memo[i][prev+1];
    int nttake=solveMemo(nums,i+1,prev);
    int take=0;
    if(prev==-1 || nums[i]>nums[prev]){
        take=1+solveMemo(nums,i+1,i);
    }
    return memo[i][prev+1]=max(take,nttake);
 }
    int lengthOfLIS(vector<int>& nums) {
        memset(memo,-1,sizeof(memo));
        return solveMemo(nums,0,-1);
    }
};