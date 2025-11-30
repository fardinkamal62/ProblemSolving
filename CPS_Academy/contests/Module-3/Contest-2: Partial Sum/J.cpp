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

    ll n, k, q;
    cin >> n >> k >> q;

    ll diff[200005] = {0};

    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        diff[a]++;
        diff[b + 1]--;
    }

    ll recipes[200005] = {0};
    recipes[0] = diff[0];
    for (ll i = 1; i < 200005; i++)
    {
        recipes[i] = recipes[i - 1] + diff[i];
    }
    // for (ll r: recipes) cout << r << " ";
    // cout << endl;

    ll prefix[200005] = {0};
    prefix[0] = (recipes[0] >= k ? 1 : 0);
    for (ll i = 1; i < 200005; i++)
    {
        prefix[i] = prefix[i - 1] + (recipes[i] >= k ? 1 : 0);
    }
    // for (ll p: prefix) cout << p << " ";
    // cout << endl;

    for (ll i = 0; i < q; i++)
    {
        ll x, y;
        cin >> x >> y;

        ll ans = prefix[y] - (x > 0 ? prefix[x - 1] : 0);
        cout << ans << endl;
    }

    return 0;
}