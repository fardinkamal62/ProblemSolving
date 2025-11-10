/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

bool checkHalf(int x, int y) {
    return max(x, y) <= 2 * min(x, y) + 2;
}

int main() {
#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tt;
    cin >> tt;

    while (tt--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        c -= a;
        d -= b;
        if (a > b) swap(a, b);
        if (c > d) swap(c, d);

        if (checkHalf(a, b) && checkHalf(c, d) && c >= 0 && d >=
            0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
