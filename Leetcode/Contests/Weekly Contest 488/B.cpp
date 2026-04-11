#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> mergeAdjacent(vector<int> &nums)
    {
        vector<long long> result;

        for (int num : nums)
        {
            long long current = num;

            while (!result.empty() && result.back() == current)
            {
                current += result.back();
                result.pop_back();
            }

            result.push_back(current);
        }

        return result;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {4, 2, 2};
    vector<long long> result = sol.mergeAdjacent(nums);
    for (long long num : result)
    {
        cout << num << " ";
    }
    cout << endl; // Output the result
    return 0;
}