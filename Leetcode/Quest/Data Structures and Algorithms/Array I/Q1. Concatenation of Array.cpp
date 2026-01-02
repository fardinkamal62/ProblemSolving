#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> result(nums.size() * 2);
        for (int i = 0; i < nums.size(); ++i)
        {
            result[i] = nums[i];
            result[i + nums.size()] = nums[i];
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
    vector<int> nums = {1, 2, 3};
    vector<int> result = sol.getConcatenation(nums);
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}