//
// Created by Fardin Kamal on 19/12/24.
//

/**
*   author:   @fardinkamal62
* 	Solution from editorial
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
        int n;
        cin >> n;
        map <int, int> m;
        bool found = false;

        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            m[k]++;

            if (m[k] > 1) found = true;
        }

        if (!found) cout << "No" << '\n';
        else cout << "Yes" << '\n';
    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
