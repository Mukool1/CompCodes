class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> frq;
        vector<int> res;
        for(int num:nums){
            frq[num]++;
        }
        for(auto&[key,value]:frq){
            if(value==1){
                res.push_back(key);
            }
        }
        return res;
    }
};