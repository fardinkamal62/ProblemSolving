#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main()
{
    fastIO();

    ll tt;
    cin >> tt;

    while (tt--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> g(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> g[i][j];
            }
        }
        pair<int, int> top = {INT_MAX, INT_MAX}, bottom = {INT_MIN, INT_MIN};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (g[i][j] == '#')
                {
                    top = min(top, {i, j});
                    bottom = max(bottom, {i, j});
                }
            }
        }
        assert(top.second == bottom.second);
        cout << (top.first + bottom.first) / 2 + 1 << " " << top.second + 1 << endl;
    }

    return 0;
}