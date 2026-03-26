class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxx=0;
        for(vector i:accounts){
            int currMax=0;
            for(int j:i){
                currMax+=j;
            }
            maxx=max(maxx,currMax);
        }
        return maxx;
    }
};