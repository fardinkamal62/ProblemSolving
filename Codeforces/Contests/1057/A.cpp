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
        long long n, num;
        cin >> n;

        set<int> s;
        for (int i = 0; i < n; i++) cin >> num, s.insert(num);

        cout << s.size() << "\n";
    }

    // #ifdef ONLINEJUDGE
    //     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    // #endif
    //
    return 0;
}
