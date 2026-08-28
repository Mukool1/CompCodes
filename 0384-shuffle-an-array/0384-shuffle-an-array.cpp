vector<int>orig,temp;
class Solution {
public:
    Solution(vector<int>& nums) {
        orig=nums;
        temp=nums;
    }
    
    vector<int> reset() {
        temp=orig;
        return orig;
    }
    
    vector<int> shuffle() {
        random_shuffle(temp.begin(),temp.end());
        return temp;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */