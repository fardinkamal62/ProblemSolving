#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    fastIO();
    ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n;
        cin >> n;

        vector<ll> w(n);
        for (int i = 0; i < n; i++)
            cin >> w[i];

        vector<ll> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
            prefix[i + 1] = prefix[i] + w[i];

        vector<ll> suffix(n + 1, 0);
        for (int j = 0; j < n; j++)
            suffix[j + 1] = suffix[j] + w[n - 1 - j];

        ll ans = 0;
        for (int i = 0; i <= n; i++)
        {
            ll target = prefix[i];
            ll lo = 0, hi = n - i;
            while (lo < hi)
            {
                ll mid = lo + (hi - lo + 1) / 2;
                if (suffix[mid] <= target)
                    lo = mid;
                else
                    hi = mid - 1;
            }
            if (suffix[lo] == target)
                ans = max(ans, (ll)i + lo);
        }

        cout << ans << endl;
    }

    return 0;
}
