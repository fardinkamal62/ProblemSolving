#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;
       
        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];

            int diff = target - num;
            if (numMap.find(diff) != numMap.end()) {
                return {numMap[diff], i};
            }
            numMap[num] = i;
        }
        return {};
    }
};

int main() {
    Solution s;
    vector<int> nums = {3,3};
    int target = 6;
    vector<int> result = s.twoSum(nums, target);
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}