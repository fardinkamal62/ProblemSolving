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
        int a, b;
        cin >> a >> b;

        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        set<pair<int, int>> st1, st2;

        int dx[] = {-1, 1, -1, 1};
        int dy[] = {-1, -1, 1, 1};

        for (int j = 0; j < 4; j++)
        {
            st1.insert({x1 + dx[j] * a, y1 + dy[j] * b});
            st2.insert({x2 + dx[j] * a, y2 + dy[j] * b});
            st1.insert({x1 + dx[j] * b, y1 + dy[j] * a});
            st2.insert({x2 + dx[j] * b, y2 + dy[j] * a});
        }
        int ans = 0;

        for (auto x : st1)
            if (st2.find(x) != st2.end())
                ans++;

        cout << ans << endl;
    }

    return 0;
}