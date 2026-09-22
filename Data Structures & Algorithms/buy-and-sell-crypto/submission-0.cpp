class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mProfit = 0;
        int current = 0;

        for (int i = 0; i < prices.size(); i++) {
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[j] - prices[i] > 0) {
                    current = prices[j] - prices[i];
                    mProfit = max(mProfit, current);
                }
            }
        }
        return mProfit;
    }
};
