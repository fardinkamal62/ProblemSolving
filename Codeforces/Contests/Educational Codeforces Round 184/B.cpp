#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        bool infinite = false;
        for (int i = 0; i + 1 < n; i++) {
            bool right_from_i = (s[i] == '>' || s[i] == '*');
            bool left_from_next = (s[i+1] == '<' || s[i+1] == '*');
            if (right_from_i && left_from_next) {
                infinite = true;
                break;
            }
        }

        if (infinite) {
            cout << -1 << "\n";
            continue;
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '<' || s[i] == '*') {
                ans = max(ans, i + 1);
            }
            if (s[i] == '>' || s[i] == '*') {
                ans = max(ans, n - i);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
