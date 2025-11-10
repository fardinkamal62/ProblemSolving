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
        long long r;
        cin >> r;

        long long d = 11;
        vector<long long> ans;
        while (r >= d) {
            if (r % d == 0)
                ans.push_back(r / d);
            d = (d - 1) * 10 + 1;
        }

        cout << ans.size() << '\n';
        if (!ans.size()) continue;
        for (int i = ans.size() - 1; i >= 0; --i)
            cout << ans[i] << ' ';
        cout << '\n';
    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
