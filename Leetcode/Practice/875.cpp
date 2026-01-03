#include "bits/stdc++.h"
#include <cmath>

using namespace std;

class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int max_pile = *max_element(piles.begin(), piles.end());

        int left = 1;
        int right = max_pile;
        int result = max_pile;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            long long total_hours = 0;
            for (int pile : piles) total_hours += ceil((pile + mid - 1) / mid);

            if (total_hours <= h)
            {
                result = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        return result;
    }
};

// Call the function for testing
int main()
{
    Solution sol;
    vector<int> piles = {805306368,805306368,805306368};
    int h = 1000000000;
    cout << sol.minEatingSpeed(piles, h) << endl; // Expected output: 3
    return 0;
}