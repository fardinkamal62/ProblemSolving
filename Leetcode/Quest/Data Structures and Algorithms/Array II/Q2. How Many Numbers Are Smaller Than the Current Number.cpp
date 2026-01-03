#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());

        unordered_map<int, int> numToCount;
        for (int i = 0; i < sortedNums.size(); ++i)
        {
            if (numToCount.find(sortedNums[i]) == numToCount.end())
            {
                numToCount[sortedNums[i]] = i;
            }
        }

        vector<int> result;
        for (int num : nums)
        {
            result.push_back(numToCount[num]);
        }

        return result;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution sol;
    vector<int> nums = {8, 1, 2, 2, 3};
    vector<int> result = sol.smallerNumbersThanCurrent(nums);

    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}