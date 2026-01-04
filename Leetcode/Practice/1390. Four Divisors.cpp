#include <bits/stdc++.h>
using namespace std;

const int MAX_X = 1e6 + 5;

vector<long long> divisor_count(MAX_X + 1, 0);
vector<vector<long long>> divisors(MAX_X + 1);
void precompute_divisors()
{
    for (long long i = 1; i <= MAX_X; i++)
    {
        for (long long j = i; j <= MAX_X; j += i)
        {
            divisor_count[j]++;
            divisors[j].push_back(i);
        }
    }
}

class Solution
{
public:
    int sumFourDivisors(vector<int> &nums)
    {
        static bool precomputed = false;
        if (!precomputed)
        {
            precompute_divisors();
            precomputed = true;
        }
        int sum = 0;
        for (auto &num : nums)
        {
            if (divisor_count[num] == 4)
            {
                for (auto d : divisors[num])
                    sum += d;
            }
        }
        return sum;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution sol;
    vector<int> nums = {21, 4, 7};
    cout << sol.sumFourDivisors(nums) << "\n";

    return 0;
}