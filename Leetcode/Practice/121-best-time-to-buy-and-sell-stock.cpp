#include <vector>
#include <iostream>
#include <climits>

class Solution
{
public:
    int maxProfit(std::vector<int> &prices)
    {
        int minPrice = INT_MAX;
        int bestProfit = 0;

        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < minPrice)
            {
                minPrice = prices[i];
            }

            int todayProfit = prices[i] - minPrice;
            if (todayProfit > bestProfit)
            {
                bestProfit = todayProfit;
            }
        }

        return bestProfit;
    }
};

int main()
{
    Solution s;
    std::vector<int> prices = {7,1,5,3,6,4};
    std::cout << s.maxProfit(prices) << std::endl;
    return 0;
}