class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX, maxP = 0;
        for (int p : prices) {
            minPrice = min(minPrice, p);
            maxP = max(maxP, p - minPrice);
        }
        return maxP;
    }
};