class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int num : nums) {
            if (num % 2 == 0)
                mp[num]++;
        }
        if (mp.empty())
            return -1;
        int smallest = -1;
        int freq = 0;
        for (const auto p : mp) {
            int num = p.first;
            int count = p.second;
            if (count > freq || (count == freq && num < smallest)) {
                freq = count;
                smallest = num;
            }
        }
        return smallest;
    }
};