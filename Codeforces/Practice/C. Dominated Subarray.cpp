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

        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        map<ll, ll> last;
        ll ans = LLONG_MAX;
        for (ll i = 0; i < n; i++)
        {
            if (last.count(v[i]))
                ans = min(ans, i - last[v[i]] + 1);
            last[v[i]] = i;
        }

        cout << (ans == LLONG_MAX ? -1 : ans) << endl;
    }
    return 0;
}
