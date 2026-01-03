class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> res(prices.size(),0);
        for(int i=0;i<prices.size()-1;i++){
            res[i]=prices[i];
            for(int j=i+1;j<prices.size();j++){
                if(prices[i]>=prices[j]){
                    res[i]=(prices[i]-prices[j]);
                    break;
                }
            }
        }
        res[res.size()-1]=prices[prices.size()-1];
        return res;
    }
};