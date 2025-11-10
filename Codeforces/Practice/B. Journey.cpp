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
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        long long result = 0;

        long long full_cycles = n / (a + b + c);
        long long remaining = n % (a + b + c);

        result = full_cycles * 3;

        if (remaining == 0) {
            cout << result << endl;
            continue;
        }

        if (remaining <= a) {
            result += 1;
        } else if (remaining <= a + b) {
            result += 2;
        } else {
            result += 3;
        }

        cout << result << endl;
    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}