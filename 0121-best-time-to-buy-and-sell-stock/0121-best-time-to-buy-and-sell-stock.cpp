class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minimumPrice=prices.at(0);
        for (int i = 0; i < prices.size(); i++) {
            minimumPrice=min(minimumPrice,prices.at(i));
            int thisProfit=prices.at(i)-minimumPrice;
            profit=max(profit,thisProfit);
        }
        return profit;
    }
};