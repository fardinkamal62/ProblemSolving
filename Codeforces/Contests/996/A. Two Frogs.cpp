/**
*   author:   @fardinkamal62
*   created:  12/01/2025 20:38
**/

#include "iostream"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, a, b;
        cin >> n >> a >> b;

        int turn = a;

        if (((a + 1) == b) && (a - 1 == b) && (a + 1 >= n) && a - 1 <= 0) {
        }
    }
    return 0;
}
