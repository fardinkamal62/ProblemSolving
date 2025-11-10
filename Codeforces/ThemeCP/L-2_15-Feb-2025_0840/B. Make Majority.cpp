/**
*   author:   @fardinkamal62
*   created:  15/02/2025 09:45
**/

#include "iostream"
#include "vector"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int k1 = 0;
        int k0 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                k1 += 1;
            } else {
                if (i == 0 || s[i - 1] != '0') {
                    k0 += 1;
                }
            }
        }
        cout << (k1 > k0 ? "Yes" : "No") << '\n';
    }
}

// Help from: https://codeforces.com/contest/1988/submission/270647308
