#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    vector<string> buildArray(vector<int> &target, int n)
    {
        vector<string> operations;
        int currentNumber = 1;
        int targetIndex = 0;
        int targetSize = target.size();

        while (targetIndex < targetSize && currentNumber <= n)
        {
            if (currentNumber == target[targetIndex])
            {
                operations.push_back("Push");
                targetIndex++;
            }
            else
            {
                operations.push_back("Push");
                operations.push_back("Pop");
            }
            currentNumber++;
        }

        return operations;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution sol;
    vector<int> target = {1, 3};
    int n = 3;
    vector<string> result = sol.buildArray(target, n);

    for (const string &op : result)
    {
        cout << op << " ";
    }
    cout << endl;

    return 0;
}