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

int solve(int x, int y)
{
    map<pair<int, int>, int> dp;

    if (x < 1 || y < 1 || x > 15 || y > 15)
        return 1;

    if (dp.find({x, y}) != dp.end())
        return dp[{x, y}];

    int state = 1;
    state = state and solve(x - 1, y - 2);
    state = state and solve(x + 1, y - 2);
    state = state and solve(x - 2, y + 1);
    state = state and solve(x - 2, y - 1);
    dp[{x, y}] = int(state == 0);
    return dp[{x, y}];
}

int main()
{
    fastIO();

    ll tt;
    cin >> tt;

    while (tt--)
    {
        int x, y;
        cin >> x >> y;
        cout << (solve(x, y) ? "First" : "Second") << endl;
    }

    return 0;
}