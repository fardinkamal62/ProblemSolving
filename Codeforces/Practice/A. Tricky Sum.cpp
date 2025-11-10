/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(long long n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}


int main() {
#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tt;
    cin >> tt;
    map<int, bool> mp;
    for (long long i = 0; i < 1e6; i++) mp[i] = isPowerOfTwo(i);

    while (tt--) {
        long long n, result = 0;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            if (mp[i]) result -= i;
            // if (isPowerOfTwo(i)) result -= i;
            else result += i;
        }

        cout << result << endl;
    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
