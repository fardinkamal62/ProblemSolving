#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> finalPrices(vector<int> &prices)
    {
        stack<int> st;
        vector<int> res = prices;

        for (int i = (int)prices.size() - 1; i >= 0; --i)
        {
            while (!st.empty() && st.top() > prices[i])
                st.pop();

            if (!st.empty())
                res[i] -= st.top();

            st.push(prices[i]);
        }

        return res;
    }
};

int main()
{
    Solution sol;

    vector<int> prices = {8, 4, 6, 2, 3};

    sol.finalPrices(prices);

    return 0;
}