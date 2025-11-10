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

        vector<char> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int m;
        cin >> m;
        vector<char> b(m);
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        string c;
        cin >> c;

        for (int i = 0; i < m; i++) {
            if (c[i] == 'D') a.push_back(b[i]);
            else a.insert(a.begin(), b[i]);
        }

        for (const char i : a) {
            cout << i;
        }
        cout << endl;
    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
