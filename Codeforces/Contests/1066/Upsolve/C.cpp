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
        ll n, k, q;
        cin >> n >> k >> q;

        vector<ll> diff1(n + 5, 0), diff2(n + 5, 0), ans(n + 1, 0);

        while (q--)
        {
            ll c, l, r;
            cin >> c >> l >> r;

            if (c == 1)
                diff1[l] += 1, diff1[r + 1] -= 1;
            else
                diff2[l] += 1, diff2[r + 1] -= 1;
        }
        ll mex_uses = 0;
        for (ll i = 1; i <= n; i++)
        {
            diff1[i] += diff1[i - 1];
            diff2[i] += diff2[i - 1];

            if (diff1[i] && diff2[i])
                ans[i] = k + 1;
            else if (diff1[i])
                ans[i] = k;
            else if (diff2[i])
                ans[i] = (mex_uses++ % k);
            else
                ans[i] = 0;

            cout << ans[i] << " \n"[i == n];
        }
    }

    return 0;
}