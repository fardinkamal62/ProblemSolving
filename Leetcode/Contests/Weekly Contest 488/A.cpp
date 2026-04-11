#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dominantIndices(vector<int> &nums)
    {
        int numbers = nums.size();
        int result = 0;

        for (int i = 0; i < numbers - 1; i++)
        {
            int sum = 0;
            int count = 0;

            for (int j = i + 1; j < numbers; j++)
            {
                sum += nums[j];
                count++;
            }

            double average = static_cast<double>(sum) / count;

            if (nums[i] > average)
                result++;
        }
        return result;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {50,98,75,26};
    int result = sol.dominantIndices(nums);
    cout << result << endl; // Output the result
    return 0;
}