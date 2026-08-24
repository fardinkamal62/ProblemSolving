#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        stack<int> st;
        vector<int> res(temperatures.size(), 0);

        for (int i = (int)temperatures.size() - 1; i >= 0; --i)
        {
            while (!st.empty() && temperatures[st.top()] <= temperatures[i])
                st.pop();

            if (!st.empty())
                res[i] = st.top() - i;

            st.push(i);
        }

        return res;
    }
};

int main()
{
    Solution sol;

    vector<int> prices = {73, 74, 75, 71, 69, 72, 76, 73};

    sol.dailyTemperatures(prices);

    return 0;
}