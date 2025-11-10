/**
*   author:   @fardinkamal62
*   problem link: https://codeforces.com/contest/1549/problem/A
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
        map<int, int> mp;
        int p;
        cin >> p;

        for (long long i = 2; i <= p; i++) {
            long long mod = p % i;
            if (mp.contains(mod)) {
                cout << mp[mod] << " " << i << endl;
                break;
            }
            mp[mod] = i;
        }
    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
