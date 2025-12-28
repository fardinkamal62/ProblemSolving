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
        cin >> n;

        vector<ll> a(n + 2, 0);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        vector<ll> suf(n + 3, 0);
        for (int i = n; i >= 1; i--)
            suf[i] = suf[i + 1] + a[i];

        vector<ll> pref(n + 2, 0);
        for (int i = 2; i <= n; i++)
            pref[i] = pref[i - 1] + llabs(a[i]);

        ll ans = suf[2] * -1;
        for (int r = 2; r <= n; r++)
        {
            ll cand = a[1] + pref[r - 1] - suf[r + 1];
            ans = max(ans, cand);
        }

        cout << ans << endl;
    }

    return 0;
}