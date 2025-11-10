#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        ll min_value = LONG_LONG_MAX;
        ll max_value = LONG_LONG_MIN;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < min_value)
            {
                min_value = a[i];
            }
            if (a[i] > max_value)
            {
                max_value = a[i];
            }
        }

        ll x;
        cin >> x;

        if (x >= min_value && x <= max_value) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}