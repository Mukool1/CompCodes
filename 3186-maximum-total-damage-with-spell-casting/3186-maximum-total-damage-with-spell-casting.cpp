long long memo[100001];
typedef long long ll;
class Solution {
public:
    long long solve(vector<pair<ll, ll>>& mp, int indx) {
        if (indx >= mp.size())
            return 0;
        if(memo[indx]!=-1)return memo[indx];
        ll nttake = solve(mp, indx + 1);
        ll take = mp[indx].second;
        ll newIndx=indx+1;
        while(newIndx<mp.size() && mp[newIndx].first <= mp[indx].first + 2)newIndx++;
        take+=solve(mp,newIndx);
        return memo[indx]=max(take, nttake);
    }
    long long maximumTotalDamage(vector<int>& nums) {
        map<ll, ll> m1;
        for (int i = 0; i < nums.size(); i++) {
            m1[nums[i]] += nums[i];
        }
        memset(memo,-1,sizeof(memo));
        vector<pair<ll, ll>> mp(m1.begin(), m1.end());
        return solve(mp, 0);
    }
};