/**
*   author:   @fardinkamal62
*   TODO: Solve it in future
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
        int n, m;
        cin >> n >> m;

        vector<int> v(n);
        vector<int> w(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        for (int i = 0; i < m; i++) cin >> w[i];
        int selected = 0;
        bool flag = false;

        while (flag == false) {
            for (int i = 0; i < m; i++) {
                if ((v[selected] & w[i]) > 0) {
                    flag = true;
                    break;
                }
            }
            if (selected < n) selected++;
        }

        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
