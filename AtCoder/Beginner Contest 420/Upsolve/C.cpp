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

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    long long result = 0;
    for (int i = 0; i < n; i++) result += min(a[i], b[i]);

    for (int i = 0; i < q; i++) {
        char letter;
        cin >> letter;

        int x, v;
        cin >> x >> v;
        x--;

        long long old_min = min(a[x], b[x]);
        if (letter == 'A') {
            a[x] = v;
        } else {
            b[x] = v;
        }
        long long new_min = min(a[x], b[x]);
        result = result - old_min + new_min;

        cout << result << endl;
    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
