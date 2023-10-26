class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int minPrice = prices[0];  // Initialize the minimum price to the first day's price
    int maxProfit = 0;        // Initialize the maximum profit to zero

    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            maxProfit = std::max(maxProfit, prices[i] - minPrice);
        }
    }

    return maxProfit;

    }
};