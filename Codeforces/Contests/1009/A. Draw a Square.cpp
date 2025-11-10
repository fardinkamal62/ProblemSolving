/**
*   author:   @fardinkamal62
*   created:  11/03/2025 20:38
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
        double l, r, d, u;
        cin >> l >> r >> d >> u;

        double horizontal_distance = sqrt(pow(r - (-l), 2) + pow(0 - 0, 2));
        double vertical_distance = sqrt(pow(0 - 0, 2) + pow(u - (-d), 2));

        if (horizontal_distance == vertical_distance) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
