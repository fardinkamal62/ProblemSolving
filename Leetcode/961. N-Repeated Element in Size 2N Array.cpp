#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int repeatedNTimes(vector<int> &nums)
    {
        map<int, int> numbers;

        for (int i = 0; i < nums.size(); i++)
        {
            numbers[nums[i]] == 0 ? numbers[nums[i]] = 1 : numbers[nums[i]]++;
            if (numbers[nums[i]] == (nums.size() / 2))
            {
                return nums[i];
            }
        }
        return -1;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution sol;
    vector<int> nums = {2, 6, 2, 1};
    int result = sol.repeatedNTimes(nums);

    cout << "N-Repeated Element: " << result << endl;

    return 0;
}