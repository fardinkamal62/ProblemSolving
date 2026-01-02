#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        vector<int> numbers(nums.size(), 0);
        vector<int> result(2, -1);

        for (int num : nums)
        {
            if (numbers[num - 1] == 1)
            {
                result[0] = num;
            }
            else
            {
                numbers[num - 1] = 1;
            }
        }
        for (int i = 0; i < numbers.size(); i++)
        {
            if (numbers[i] == 0)
            {
                result[1] = i + 1;
                break;
            }
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
    vector<int> nums = {1, 2, 2, 4};
    vector<int> result = sol.findErrorNums(nums);

    cout << "Duplicate: " << result[0] << ", Missing: " << result[1] << endl;

    return 0;
}