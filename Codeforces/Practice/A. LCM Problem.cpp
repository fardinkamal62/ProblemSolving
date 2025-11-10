/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifdef ONLINEJUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tt;
    cin >> tt;

    while (tt--) {
        long long l, r;
        cin >> l >> r;

        if (2 * l <= r) {
            cout << l << " " << 2 * l << endl;
        } else {
            cout << -1 << " " << -1 << endl;
        }
    }

    return 0;
}
