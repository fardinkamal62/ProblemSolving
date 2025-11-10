/**
*   author:   @fardinkamal62
*   created:  15/02/2025 09:09
**/

#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        while (a.size() != 1) {
            a.push_back((a[0] + a[1]) / 2);
            a.erase(a.begin(), a.begin() + 2);
            sort(a.begin(), a.end());
        }

        cout << a[0] << "\n";
    }
    return 0;
}
