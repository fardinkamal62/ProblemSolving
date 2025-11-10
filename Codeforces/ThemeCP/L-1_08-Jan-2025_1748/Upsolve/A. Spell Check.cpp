/**
*   author:   @fardinkamal62
*   created:  09/01/2025 06:44
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

        sort(s.begin(), s.end());

        if (s.size() != 5) {
            cout << "NO\n";
            continue;
        }

        bool capitalT = false;
        bool i = false;
        bool m = false;
        bool u = false;
        bool r = false;
        for (auto& c : s) {
            if (c == 'T') {
                capitalT = !capitalT;
            }
            if (c== 'i') {
                i = !i;
            }
            if (c == 'I') {
                i = false;
            }
            if (c == 'm') {
                m = !m;
            }
            if (c == 'M') {
                m = false;
            }
            if (c == 'u') {
                u = !u;
            }
            if (c == 'U') {
                u = false;
            }
            if (c == 'r') {
                r = !r;
            }
            if (c == 'R') {
                r = false;
            }
        }
        if (capitalT && i && m && u && r) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
