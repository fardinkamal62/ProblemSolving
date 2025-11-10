/**
*   author:   @fardinkamal62
*   created:  08/04/2025 20:35
**/

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int k;
        cin >> k;
        if (k % 2 == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
