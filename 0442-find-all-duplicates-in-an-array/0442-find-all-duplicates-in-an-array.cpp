class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.size()<=1)return {};
        vector<int>res;
        unordered_map<int,int>map;
        for(int i:nums){
            map[i]++;
        }
        for(auto i :map){
            if(i.second==2)res.push_back(i.first);
        }
        return res;
    }
};