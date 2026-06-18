#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

class Solution
{
public:
    int findCenter(vector<vector<int>> &edges)
    {
        map<int, int> deg;

        for (int i = 0; i < edges.size(); i++)
        {
            deg[edges[i][0]]++;
            deg[edges[i][1]]++;
        }

        int max_key = 0, max_value = 0;
        for (const auto [key, value] : deg)
        {
            if (value > max_value)
                max_value = value, max_key = key;
            // cout << "Key: " << key << " || Value: " << value << endl;
        }

        return max_key;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> edges = {{1, 2},
                                 {2, 3},
                                 {4, 2}};
    cout << sol.findCenter(edges) << endl;
    return 0;
}