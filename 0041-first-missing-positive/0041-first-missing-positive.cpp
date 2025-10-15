class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sml=1;
        for(int i=0;i<nums.size();i++){
            if(nums.at(i)==sml){
                sml++;
            }
        }
        return sml;
    }
};