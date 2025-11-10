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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int mid = (n - 1) / 2;
        int cnt = 0;
        for (int i = mid; i >= 0; --i) {
            if (s[i] == s[mid]) {
                ++cnt;
            } else {
                break;
            }
        }
        int result = 2 * cnt - (n % 2);

        cout << result << "\n";

    }
    return 0;
}
