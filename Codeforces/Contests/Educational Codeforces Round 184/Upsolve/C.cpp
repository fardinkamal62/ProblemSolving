#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<ll> a(n+1), prefix(n+1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            prefix[i] = prefix[i-1] + a[i];
        }

        ll total = prefix[n];


        ll best = 0;
        ll minimum_left = LLONG_MAX;

        for (int r = 1; r <= n; r++) {
            ll left_r = r*1LL*r - r - prefix[r-1];
            minimum_left = min(minimum_left, left_r);

            ll right_r = r*1LL*r + r - prefix[r];

            best = max(best, right_r - minimum_left);
        }

        cout << total + best << "\n";
    }
    return 0;
}
