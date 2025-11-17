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
        vector<ll> a(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        if (n == 2) {
            cout << max(a[0], a[1]) << "\n";
            continue;
        }

        ll sum_of_values = 0;
        ll max_val = 0;

        for (int i = 0; i < n; i++) {
            ll w = max(a[i], a[(i + 1) % n]);
            sum_of_values += w;
            max_val = max(max_val, w);
        }

        cout << (sum_of_values - max_val) << "\n";
    }

    return 0;
}