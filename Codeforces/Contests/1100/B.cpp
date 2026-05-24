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

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        ll sum_max = 0, max_min = 0;
        for (ll i = 0; i < n; i++)
        {
            sum_max += max(a[i], b[i]);
            max_min = max(max_min, min(a[i], b[i]));
        }

        cout << sum_max + max_min << endl;
    }

    return 0;
}