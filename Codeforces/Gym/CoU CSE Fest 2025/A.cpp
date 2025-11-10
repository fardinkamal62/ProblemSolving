/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

long long fact[21];
void precompute_factorials() {
    fact[0] = 1;
    for (int i = 1; i <= 20; i++) {
        fact[i] = fact[i-1] * i;
    }
}

int main() {
#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    precompute_factorials();
    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;
        cout << fact[n - 1] << endl;
    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
