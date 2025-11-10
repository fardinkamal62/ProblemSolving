/**
*   author:   @fardinkamal62
*   created:  19/12/24 21:42
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
        cout << (n * m) / min(n, m) << "\n";
    }
    return 0;
}
