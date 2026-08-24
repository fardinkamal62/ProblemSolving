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

        ll sum = 0, mn = 1e18;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mn = min(mn, x);
            sum += mn;
        }

        cout << sum << endl;
    }

    return 0;
}