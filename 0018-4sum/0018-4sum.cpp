class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1])continue;
            for(int j=i+1;j<nums.size();j++){
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                long long firs=nums[i];
                long long sec=nums[j];
                int k=j+1;
                int l=nums.size()-1;
                while(k<l){
                    long long sum=firs+sec+(long long)nums[k]+(long long)nums[l];
                    if(sum>target)l--;
                    else if(sum<target)k++;
                    else{
                        res.push_back({(int)firs,(int)sec,(int)nums[k],(int)nums[l]});
                        l--;k++;
                        while(k<l&&nums[k]==nums[k-1])k++;
                        while(k<l&&nums[l]==nums[l+1])l--;
                    }
                }
            }
        }
        return res;
    }
};