#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0, maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                curr++;
                maxi = max(maxi, curr);
            } else {
                curr = 0;
            }
        }
        return maxi;
        
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution sol;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int result = sol.findMaxConsecutiveOnes(nums);

    cout << "Max Consecutive Ones: " << result << endl;

    return 0;
}