class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        for(int i:nums){
            map[i]++;
        }
        vector<pair<int,int>>sortedPair(map.begin(),map.end());
        vector<int>res;
        sort(sortedPair.begin(),sortedPair.end(),[](auto&a,auto&b){
            return a.second<b.second;
        });
        for(int i=sortedPair.size()-1;i>=0;i--){
            if(k>0){
                res.push_back(sortedPair[i].first);
                k--;
            }
        }
        return res;
    }
};