/**
*   author:   @fardinkamal62
*   created:  25/02/2025 20:34
**/

#include "iostream"
#include "cmath"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k, p;
        cin >> n >> k >> p;

        if (n * p >= abs(k)) {
            cout << ceil(static_cast<double>(abs(k)) / p) << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}
