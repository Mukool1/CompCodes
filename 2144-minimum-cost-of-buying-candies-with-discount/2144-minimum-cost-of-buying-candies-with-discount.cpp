class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if(cost.size()==1)return cost[0];
        if(cost.size()==2)return cost[0]+cost[1];
        sort(cost.rbegin(),cost.rend());
        int total=0;
        for(int i=0;i<cost.size();i++){
            if(i%3!=2){
                total+=cost[i];
            }
        }
        return total;
    }
};