/**
*   author:   @fardinkamal62
*   created:  08/01/2025 07:17
**/

#include "iostream"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int b, c, h;
        cin >> b >> c >> h;

        if (b > (c + h)) {
            cout << ((c + h) * 2) + 1 << "\n";
        } else {
            cout << (b * 2) - 1<< "\n";
        }
    }
    return 0;
}
