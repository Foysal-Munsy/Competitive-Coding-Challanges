//Problem link: https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/564/

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int sz = prices.size(), profit = 0;
        for (int i = 0; i < sz - 1; i++)
        {
            int diff = prices[i + 1] - prices[i];
            if (0 < diff)
                profit += diff;
        }
        return profit;
    }
}
