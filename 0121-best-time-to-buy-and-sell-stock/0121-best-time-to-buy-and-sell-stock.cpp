class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minPrice=prices.at(0);
        for (int i = 0; i < prices.size(); i++) {
            minPrice=min(minPrice,prices.at(i));
            profit=max(profit,prices.at(i)-minPrice);
        }
        return profit;
    }
};