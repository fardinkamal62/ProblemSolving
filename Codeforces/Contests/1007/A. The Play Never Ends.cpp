/**
*   author:   @fardinkamal62
*   created:  28/02/2025 20:50
**/

#include "iostream"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int k;
        cin >> k;

        if ((k - 1) % 3 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
