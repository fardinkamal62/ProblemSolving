/**
*   author:   @fardinkamal62
*   created:  19/12/24 21:42
*   problem: https://codeforces.com/problemset/problem/1734/B
**/

#include "iostream"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << (j == 1 || j == i) << ' ';
            }

            cout << '\n';
        }
    }
    return 0;
}
