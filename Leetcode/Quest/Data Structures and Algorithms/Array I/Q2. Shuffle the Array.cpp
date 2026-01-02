#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> shuffled;
        for (int i = 0; i < n; i++)
        {
            shuffled.push_back(nums[i]);
            shuffled.push_back(nums[i + n]);
        }
        return shuffled;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution sol;
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n = 3;
    vector<int> result = sol.shuffle(nums, n);

    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}