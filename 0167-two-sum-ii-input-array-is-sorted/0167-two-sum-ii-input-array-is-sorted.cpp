class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for (int i = 0; i < numbers.size(); i++) {
            int num = numbers[i];
            int diff = target - num;
            if (mp.count(diff)) {
                ans.push_back(mp[diff]+1);
                ans.push_back(i+1);
            }
            mp[num] = i;
        }
        return ans;
    }
};