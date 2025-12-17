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
        ll h;
        cin >> n >> h;

        vector<ll> a(n);
        for (ll &x : a)
            cin >> x;

        ll l = 1, r = 1e18;

        while (l <= r)
        {
            ll m = (l + r) / 2;
            ll sum = m;
            for (int i = 0; i < n - 1; ++i)
                sum += min(m, a[i + 1] - a[i]);
            if (sum < h)
                l = m + 1;
            else
                r = m - 1;
        }

        cout << r + 1 << endl;
    }

    return 0;
}