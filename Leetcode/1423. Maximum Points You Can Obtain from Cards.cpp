#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        long long curr_sum = 0, max_sum = 0;

        for (int i = 0; i < k; ++i)
        {
            curr_sum += cardPoints[i];
        }
        max_sum = curr_sum;

        int n = cardPoints.size();
        for (int i = 0; i < k; ++i)
        {
            curr_sum -= cardPoints[k - 1 - i];
            curr_sum += cardPoints[n - 1 - i];
            max_sum = max(max_sum, curr_sum);
        }
        return max_sum;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> cardPoints = {2, 2, 2};
    int k = 2;

    Solution sol;
    int result = sol.maxScore(cardPoints, k);
    cout << result << endl;

    return 0;
}