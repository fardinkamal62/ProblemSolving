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
        int n;
        string s;
        cin >> n >> s;
        vector<int> ones;
        for (int i = 0; i < n; ++i)
            if (s[i] == '1')
                ones.push_back(i);
        if (ones.empty())
        {
            cout << 0 << '\n';
            continue;
        }
        vector<int> dist(n, INT_MAX / 4);
        int last = -1;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                last = i;
                dist[i] = 0;
            }
            else
            {
                if (last != -1)
                    dist[i] = i - last;
            }
        }

        int last_one = ones.back();
        for (int i = 0; i < n; ++i)
        {
            int wrapDist = i + n - last_one;
            if (wrapDist < dist[i])
                dist[i] = wrapDist;
        }
        int ans = 0;
        for (int i = 0; i < n; ++i)
            ans = max(ans, dist[i]);
        cout << ans << endl;
    }

    return 0;
}