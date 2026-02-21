class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>freq(nums.size(),0);
        vector<int>res;
        for(int i:nums){
            freq[i]++;
        }
        for(int i=0;i<freq.size();i++){
            if(freq[i]==2){
                res.push_back(i);
            }
        }
        return res;
    }
};