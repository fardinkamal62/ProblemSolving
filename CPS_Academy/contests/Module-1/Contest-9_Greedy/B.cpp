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
        int n, k, count = 0, last = -1;
        cin >> n >> k;

        string s;
        cin >> s;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'B' && i > last) {
                count++;
                int start = i;
                if (start > n - k) {
                    start = n - k;
                }
                last = start + k - 1;
            }
        }
        cout << count << endl;
    }

    // #ifdef ONLINEJUDGE
    //     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    // #endif

    return 0;
}
