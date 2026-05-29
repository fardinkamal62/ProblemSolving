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

    ll x;
    cin >> x;

    vector<ll> factors;
    for (ll p = 2; p * p <= x; p++)
    {
        if (x % p == 0)
        {
            ll pk = 1;
            while (x % p == 0) { pk *= p; x /= p; }
            factors.push_back(pk);
        }
    }
    if (x > 1) factors.push_back(x);
    x = 1;
    for (ll f : factors) x *= f;

    int n = factors.size();
    ll best_a = 1, best_b = x;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        ll a = 1;
        for (int i = 0; i < n; i++)
            if (mask >> i & 1) a *= factors[i];
        ll b = x / a;
        if (max(a, b) < max(best_a, best_b))
            best_a = a, best_b = b;
    }
    cout << best_a << " " << best_b << endl;

    return 0;
}