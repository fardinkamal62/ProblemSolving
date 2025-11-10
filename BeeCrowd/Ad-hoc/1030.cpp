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

    int tt, cases;
    cin >> tt;
    cases = tt;

    while (tt--) {
        int n, k, ans = 0;
        cin >> n >> k;

        for (int i = 1; i <= n; i++) ans = (ans + k) % i;

        cout << "Case " << cases - tt << ": " << ans + 1 << "\n";
    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
