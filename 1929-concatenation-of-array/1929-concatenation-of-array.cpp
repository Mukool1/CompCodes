class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        for(int i=0;i<n;i++){
            res.push_back(nums.at(i));
        }
        int j=0;
        while(j<nums.size()){
            res.push_back(nums.at(j));
            j++;
        }
        return res;
    }
};