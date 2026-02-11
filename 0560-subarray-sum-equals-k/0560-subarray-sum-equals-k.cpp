class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        vector<int>prefix_sum(nums.size(),0);
        prefix_sum[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix_sum[i]=prefix_sum[i-1]+nums[i];
        }
        unordered_map<int,int> mapp;
        for(int j=0;j<nums.size();j++){
            if(prefix_sum[j]==k)count++;
            int val=prefix_sum[j]-k;
            if(mapp.find(val)!=mapp.end())count+=mapp[val];
            if(mapp.find(prefix_sum[j])==mapp.end())mapp[prefix_sum[j]]=0;
            mapp[prefix_sum[j]]++;
        }
        return count;
    }
};