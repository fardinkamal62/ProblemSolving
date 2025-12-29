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

    ll n0 = n;

    vector<ll> p;
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            p.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        p.push_back(n);
    }

    n = n0;

    long c = n;
    long ans = c;
    for (ll x : p)
    {
        c /= x;
        ans += c;
    }
    cout << ans << endl;

    return 0;
}