/**
*   author:   @fardinkamal62
*   created:  19/12/24 21:42
**/
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;

        string s1, s2;
        cin >> s1 >> s2;

        bool same = true;
        for (int i = 0; i < n && same; i++) {
            char c = s2[i];
            char original = s1[i];

            if (c == 'R') {
                if (original != 'R') same = false;
            }
            else if (c == 'G') {
                if (original != 'G' && original != 'B') same = false;
            }
            else if (c == 'B') {
                if (original != 'B' && original != 'G') same = false;
            }
        }

        if (same) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
