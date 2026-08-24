class Solution {
public:
    int stoneGameVIII(vector<int>& stones) {
        vector<int>prefix(stones.size());
        prefix[0]=stones[0];
        for(int i=1;i<stones.size();i++){
            prefix[i]=prefix[i-1]+stones[i];
        }
        int opt=prefix[prefix.size()-1];
        for(int i=prefix.size()-2;i>=1;i--){
            opt=max(opt,prefix[i]-opt);
        }
        return opt;
    }
};