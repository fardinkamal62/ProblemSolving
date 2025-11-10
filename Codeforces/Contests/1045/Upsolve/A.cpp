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
        long long n, a, b;
        cin >> n >> a >> b;

        if (a <= b) {
            cout << ((n % 2) == (b % 2) ? "YES\n" : "NO\n");
        } else {
            cout << ((n % 2) == (b % 2) && (n % 2) == (a % 2) ? "YES\n" : "NO\n");
        }

    }

    #ifdef ONLINEJUDGE
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
