int memo[10001];
class Solution {
public:
    int solve(vector<pair<int, int>>& mp, int indx) {
        if (indx >= mp.size())
            return 0;
        if(memo[indx]!=-1)return memo[indx];
        int nttake = solve(mp, indx + 1);
        int take = mp[indx].second;
        if (indx + 1 < mp.size() && mp[indx + 1].first == mp[indx].first + 1) {
            take += solve(mp, indx + 2);
        } else {
            take += solve(mp, indx + 1);
        }
        return memo[indx]=max(take, nttake);
    }

    int deleteAndEarn(vector<int>& nums) {
        if (nums.empty())
            return 0;
        map<int, int> m1;
        for (int i = 0; i < nums.size(); i++) {
            m1[nums[i]] += nums[i];
        }
        memset(memo,-1,sizeof(memo));
        vector<pair<int, int>> mp(m1.begin(), m1.end());
        return solve(mp, 0);
    }
};