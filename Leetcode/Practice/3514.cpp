#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int> st, s;
        int n = nums.size();

        for(int i=0; i<n; i++){
            for(int j = i; j<n; j++){
                st.insert(nums[i]^nums[j]);
            }
        }

        for(auto num: st){
            for(auto x: nums){
                s.insert(num^x);
            }
        }
        return s.size();
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
    int result = sol.uniqueXorTriplets(nums);
    cout << "Number of unique XOR triplets: " << result << endl;
    
    return 0;
}