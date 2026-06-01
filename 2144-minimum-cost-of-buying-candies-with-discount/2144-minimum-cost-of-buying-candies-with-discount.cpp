class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if(cost.size()==1)return cost[0];
        if(cost.size()==2)return cost[0]+cost[1];
        sort(cost.begin(),cost.end());
        int total=0,op=0;
        for(int i=cost.size()-1;i>=0;i--){
            if(op==2){
                op=0;
            }
            else{
                total+=cost[i];
                op++;
            }
        }
        return total;
    }
};