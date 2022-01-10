class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        // Set minimum price to biggest int value so it's definitely replaced.
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            // If price lower than current minimum found, replace current minimum.
            if (prices[i] < minPrice)
            {
                minPrice = prices[i];
            }
            // Otherwise, if new maximum profit is found, replace current maximum profit.
            else if (prices[i] - minPrice > maxProfit)
            {
                maxProfit = prices[i] - minPrice;
            }
        }
        return maxProfit;
    }
};