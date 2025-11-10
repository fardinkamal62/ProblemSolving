/**
*   author:   @fardinkamal62
*   created:  19/12/24 21:42
*   problem: https://codeforces.com/problemset/problem/2050/A
**/

#include "iostream"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;

        int result = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            sum += static_cast<int>(s.length());
            if (sum <= m) {
                result += 1;
            }
        }

        cout << result << "\n";
    }
    return 0;
}
