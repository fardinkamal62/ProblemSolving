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
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.rbegin(), a.rend());

        vector<bool> used(n + 1, false);
        bool ok = true;

        for (int i = 0; i < n; i++)
        {
            ll x = a[i];
            while (x > n || used[x])
                x /= 2;

            if (x == 0)
            {
                ok = false;
                break;
            }

            used[x] = true;
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}
