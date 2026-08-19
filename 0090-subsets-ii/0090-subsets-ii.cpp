class Solution {
public:
//recursion
    void sub(vector<int> nums,vector<vector<int>>&ans,vector<int>&curr,int i){
        if(i==nums.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        sub(nums,ans,curr,i+1);
        curr.pop_back();
        int index=i+1;
        while(index<nums.size() && nums[index-1]==nums[index])index++;
        sub(nums,ans,curr,index);
    }
//ip/op
    void ipop(vector<int>& nums,vector<vector<int>>&ans,vector<int>&curr){
        ans.push_back(curr);
        if(nums.size()==0)return;
        for(int i=0;i<nums.size();i++){
            vector<int>ip(nums),op(curr);
            op.push_back(nums[i]);
            for(int j=0;j<=i;j++){
                ip.erase(ip.begin());
            }
            ipop(ip,ans,op);
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>curr;
        // sub(nums,ans,curr,0);
        ipop(nums,ans,curr);
        set<vector<int>> unique_subsets(ans.begin(), ans.end());
        return vector<vector<int>>(unique_subsets.begin(), unique_subsets.end());
        // return ans;
    }
};