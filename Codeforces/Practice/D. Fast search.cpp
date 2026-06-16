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

    ll n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll k;
    cin >> k;

    sort(a.begin(), a.end());
    for (int i = 0; i < k; i++)
    {
        ll l, r;
        cin >> l >> r;

        auto lo = lower_bound(a.begin(), a.end(), l);
        auto hi = upper_bound(a.begin(), a.end(), r);

        cout << (hi - lo);
        if (i < k - 1)
            cout << " ";
    }
    cout << endl;

    return 0;
}
