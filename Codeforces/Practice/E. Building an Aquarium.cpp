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
        ll n, x;
        cin >> n >> x;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll lo = 1, hi = 2e14;

        auto canFit = [&](ll h) -> bool
        {
            ll water = 0;
            for (int i = 0; i < n; i++)
            {
                if (h > a[i])
                {
                    water += h - a[i];
                    if (water > x)
                        return false;
                }
            }
            return true;
        };

        while (lo < hi)
        {
            ll mid = lo + (hi - lo + 1) / 2;
            if (canFit(mid))
                lo = mid;
            else
                hi = mid - 1;
        }

        cout << lo << endl;
    }

    return 0;
}