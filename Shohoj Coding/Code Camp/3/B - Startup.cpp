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
        ll n, k, ans = 0;
        cin >> n >> k;

        vector<ll> a(k);

        for (ll i = 0; i < k; i++)
        {
            ll b, c;
            cin >> b >> c;

            a[b - 1] += c;
        }

        sort(a.rbegin(), a.rend());


        for (ll i = 0; i < min(n, k); i++)
            ans += a[i];

        cout << ans << endl;
    }

    return 0;
}