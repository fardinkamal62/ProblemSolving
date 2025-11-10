//
// Created by Fardin Kamal on 19/12/24.
//

/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];

        sort(v.begin(), v.end());

        long long ans = 0;
        if (n % 2 == 0) {
            for (int i = 0; i + 1 < n; i += 2) ans += v[i + 1];
        } else {
            ans += v[0];
            for (int i = 1; i + 1 < n; i += 2) ans += v[i + 1];
        }

        cout << ans << '\n';

    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}