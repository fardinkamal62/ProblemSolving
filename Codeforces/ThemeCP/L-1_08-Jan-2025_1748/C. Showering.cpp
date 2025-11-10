/**
*   author:   @fardinkamal62
*   created:  08/01/2025 17:50
**/

#include "iostream"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, s, m, l, r;
        cin >> n >> s >> m;

        int startingTime = 0;

        bool canShower = false;
        for (int i = 0; i < n; i++) {
            // int l, r;
            cin >> l >> r;

            if (!canShower) {
                if (l - startingTime >= s) {
                    canShower = true;
                }
                startingTime = r;
            }
        }

        if (!canShower) {
            if (m - r >= s) {
                canShower = true;
            }
        }
        cout << (canShower ? "YES" : "NO") << endl;
    }
    return 0;
}
