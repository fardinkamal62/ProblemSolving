/**
*   author:   @fardinkamal62
*   created:  19/12/24 21:42
*   inspiration: https://codeforces.com/contest/2043/submission/298258225
*   problem: https://codeforces.com/contest/2043/problem/A
**/

#include "iostream"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;

    while (tt--) {
        long long n, cnt = 0;
        cin >> n;
        while (n > 3) {
            n /= 4;
            cnt++;
        }
        long long ans = 1;
        for (int i = 1; i <= cnt; i++) {
            ans *= 2;
        }
        cout << ans << endl;
    }
    return 0;
}
