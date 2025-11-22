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

ll query(int l, int r, vector<ll> &p)
{
    return p[r] - (l ? p[l - 1] : 0);
}

int main()
{
    fastIO();

    ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n, s;
        cin >> n >> s;

        vector<ll> a(n), p(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            p[i + 1] = a[i] + p[i];
        }

        ll ans = LLONG_MAX;

        for (int i = 0; i < n; ++i)
        {
            int l = i, r = n - 1, pos = -1;

            while (l <= r)
            {
                int mid = l + (r - l) / 2;

                if (p[mid + 1] - p[i] <= s)
                {
                    pos = mid;
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }

            if (pos == -1 || p[pos + 1] - p[i] != s)
                continue;
            ans = min(ans, n - (pos - i + 1));
        }

        if (ans == LLONG_MAX)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }

    return 0;
}