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
        map<ll, ll> freq;
        ll n;
        cin >> n;
        for (ll i = 0; i < 2 * n; i++)
        {
            ll x;
            cin >> x;
            freq[x]++;
        }

        ll odd = 0, even = 0;

        for (auto &[key, value] : freq)
        {
            if (value & 1)
                odd++;
            else
                even++;
        }

        // ll ans = odd + 2 * min(even, n / 2);
        
        // cout << ans << endl;

        ll k = min(even, n);
        // cout << "Debug: odd=" << odd << " even=" << even << " k=" << k << endl;

        if (odd == 0 && (n - k) & 1)
        {
            if (k > 0)
                k--;
        }

        cout << odd + 2 * k << endl;
    }

    return 0;
}