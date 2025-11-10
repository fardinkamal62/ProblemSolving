/**
*   author:   @fardinkamal62
*   created:  19/12/24 21:42
*   problem: https://codeforces.com/contest/2036/problem/C
**/

#include "iostream"
#include "unordered_set"
using namespace std;

bool search_1100(const string &s, const int i) {
    return i >= 0 && i + 3 < s.size() && s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        string s;
        cin >> s;

        int initially = 0;
        unordered_set<int> initial_index;
        for (int j = 0; j <= s.size(); j++) {
            if (search_1100(s, j)) {
                initially += 1;
                initial_index.insert(j);
            }
        }

        int q;
        cin >> q;

        for (int j = 0; j < q; j++) {
            int i;
            char v;

            cin >> i >> v;
            i = i - 1;

            for (int k = i - 3; k <= i; k++) {
                if (search_1100(s, k)) {
                    if (initial_index.erase(k)) {
                        initially--;
                    }
                }
            }

            s[i] = v;

            for (int k = i - 3; k <= i; k++) {
                if (search_1100(s, k)) {
                    if (initial_index.insert(k).second) {
                        initially++;
                    }
                }
            }

            if (initially > 0) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        }
    }
    return 0;
}
