class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i:nums){
            m[i]++;
        }
        unordered_map<int,int>m_fre;
        for(auto &p:m){
            m_fre[p.second]++;
        }
        for(int i:nums){
            if(m_fre[m[i]]==1)return i;
        }
        return -1;
    }
};