/**
*   author:   @fardinkamal62
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<char, int> charCount;

    string s;
    cin >> s;

    for (char c : s) {
        charCount[c]++;
    }

    if (charCount.size() == 2) {
        bool valid = true;
        for (const auto& entry : charCount) {
            if (entry.second != 2) {
                valid = false;
                break;
            }
        }
        if (valid) {
            cout << "Yes" << '\n';
            return 0;
        }
    }

    cout << "No" << '\n';

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
