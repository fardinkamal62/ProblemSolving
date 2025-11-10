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
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long x, y;
    cin >> x >> y;

    cout << (x - y / 2) << endl;

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
