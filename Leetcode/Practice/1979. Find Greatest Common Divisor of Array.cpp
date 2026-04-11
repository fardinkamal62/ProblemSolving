#include <iostream>
#include <vector>
#include <climits>
#include <numeric>

class Solution {
public:
    int findGCD(std::vector<int>& nums) {
        int small = INT_MAX, large = INT_MIN;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > large) large = nums[i];
            if (nums[i] < small) small = nums[i];
        }

        return std::gcd(small, large);
        
    }
};

int main ()
{
    Solution s;

    std::vector<int> numbers = {2,5,6,9,10};
    int result = s.findGCD(numbers);

    std::cout << result << std::endl;
}