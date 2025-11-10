/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

bool isValid(long long num, long long num_a, long long prev) {
    if (num > 0 && num_a != num && num > prev) return true;
    return false;
}

int main() {
// #ifdef ONLINEJUDGE
//     clock_t tStart = clock();
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        long long prev = -1, result;
        for (int i = 0; i < n; i++) {
            long long num;
            cin >> num;
            long long k = (prev == -1) ? 1 : prev + 1;
            if (isValid(k, num, prev)) result = k;
            else {
                long long m = k + 1;
                if (isValid(m, num, prev)) result = m;
                else result = prev;
            }
            prev = result;
        }
        cout << result << endl;
    }

// #ifdef ONLINEJUDGE
//     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
// #endif

    return 0;
}
