class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if(i>0&&nums[i]==nums[i-1])continue;
            int firs=nums[i];
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=firs+nums[j]+nums[k];  
                if(sum>0)k--;
                else if(sum<0) j++;
                else{
                    res.push_back({firs,nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k&&nums[j]==nums[j-1])j++;
                    while(k>j&&nums[k+1]==nums[k])k--;
                }  
            }
        }
        return res;
    }
};