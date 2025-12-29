class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> present(nums.size()+1,false);
        vector<int> res;
        for(int i:nums){
            present[i]=true;
        }
        for(int i=1;i<=nums.size();i++){
            if(!present[i]){
                res.push_back(i);
            }
        }
        return res;
    }
};