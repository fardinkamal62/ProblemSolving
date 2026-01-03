#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());

        vector<int> result;

        int initial = 1;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && sorted_nums[i] == sorted_nums[i - 1])
                continue;

            while (initial < sorted_nums[i])
            {
                result.push_back(initial);
                initial++;
            }
            initial = sorted_nums[i] + 1;
        }

        while (initial <= n)
        {
            result.push_back(initial);
            initial++;
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
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> result = sol.findDisappearedNumbers(nums);

    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}