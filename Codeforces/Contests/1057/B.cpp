/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

int main() {
    // #ifdef ONLINEJUDGE
    //     clock_t tStart = clock();
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int tt;
    cin >> tt;

    while (tt--) {
        long long x,y,z;
        cin >> x >> y >> z;

        long long t = (x & y & z);
        long long a = (x & y);
        long long b = (y & z);
        long long c = (z & x);

        if (a != t || b != t || c != t) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    // #ifdef ONLINEJUDGE
    //     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    // #endif
    //
    return 0;
}
