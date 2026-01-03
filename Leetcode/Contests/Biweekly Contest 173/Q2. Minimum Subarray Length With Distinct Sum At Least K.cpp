#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minLength(vector<int> &nums, int k)
    {
        int n = nums.size();
        int min_len = INT_MAX;
        int left = 0;
        unordered_map<int, int> freq;
        int sum = 0;

        for (int right = 0; right < n; right++)
        {
            if (freq[nums[right]] == 0)
            {
                sum += nums[right];
            }
            freq[nums[right]]++;

            while (sum >= k)
            {
                min_len = min(min_len, right - left + 1);

                freq[nums[left]]--;
                if (freq[nums[left]] == 0)
                {
                    sum -= nums[left];
                }
                left++;
            }
        }

        return min_len == INT_MAX ? -1 : min_len;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution sol;
    vector<int> nums = {2, 2, 3, 1};
    int k = 5;

    cout << sol.minLength(nums, k) << endl;

    return 0;
}