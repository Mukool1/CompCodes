class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        } 
        for(auto& [key,val]:freq){
            if(val == 1){
                return key;
            }
        }
        return -1;
    }
};