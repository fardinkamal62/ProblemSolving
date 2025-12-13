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
        ll n;
        cin >> n;

        vector<ll> a(n);

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll ans = 0;

        for (ll j = 29; j >= 0; j--)
        {
            ll count = 0;
            for (ll i = 0; i < n; i++)
            {
                if (a[i] >= (1 << j) && a[i] < (1 << (j + 1)))
                {
                    count++;
                }
            }
            ans += (count * (count - 1)) / 2;
        }

        cout << ans << endl;
    }

    return 0;
}