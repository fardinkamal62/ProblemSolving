#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>> &edges)
    {
        vector<int> indegree(n + 1, 0);
        for (auto &e : edges)
            indegree[e[1]]++;

        vector<int> res;
        for (int i = 0; i < n; i++)
            if (indegree[i] == 0)
                res.push_back(i);
        return res;
    }
};

int main()
{
    Solution sol;
    int n = 6;
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {2, 5}, {3, 4}, {4, 2}};
    sol.findSmallestSetOfVertices(n, edges);
    return 0;
}