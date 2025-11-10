/**
*   author:   @fardinkamal62
*   created:  08/01/2025 18:14
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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<int>());
        int sum = 0;
        for (int i = 0; i < n; i++) {

            if (sum + a[i] <= k) {
                sum += a[i];
            } else break;
        }

        cout << k - sum << "\n";
    }
    return 0;
}
