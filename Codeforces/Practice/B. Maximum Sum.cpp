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
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        vector<ll> pref(n + 1);

        for (ll i = 0; i < n; i++)
            pref[i + 1] = pref[i] + a[i];

        ll ans = 0;
        for (ll x = 0; x <= k; x++)
        {
            ll y = k - x;
            ans = max(ans, pref[n - y] - pref[2 * x]);
        }
        cout << ans << '\n';
    }

    return 0;
}