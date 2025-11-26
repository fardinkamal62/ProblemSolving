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

        map<ll, ll> freq;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            freq[x]++;
        }

        ll ans = 0;
        for (auto it : freq)
        {
            if (it.second > it.first)
                ans += (it.second - it.first);
            else if (it.second < it.first)
                ans += it.second;
        }

        cout << ans << endl;
    }

    return 0;
}