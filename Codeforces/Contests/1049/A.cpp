/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

int main() {
    // #ifdef ONLINEJUDGE
    //     clock_t tStart = clock();
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        string s;
        cin >> n >> s;

        int operations = 0;
        bool has_ones_to_right = false;

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '1') {
                has_ones_to_right = true;
            } else if (s[i] == '0' && has_ones_to_right) {
                // Current '0' has at least one '1' to its right
                // This represents an inversion
                operations++;
                // Reset the flag because we'll handle this inversion
                has_ones_to_right = false;
            }
        }

        cout << operations << endl;


        // int result = 0;
        // int start = -1, end = -1;
        // char prev = '-';
        // for (int i = n-1; i >= 0; i--) {
        //     cout << "Character " << i << ": " << s[i] << endl;
        //     if (s[i] == '0' && start == -1) start = i;
        //     else if (s[i] == '1' && start != -1) {
        //         result++;
        //     }
        // }
        // // if (start != -1) result++;
        // cout << result << endl;
    }

    // #ifdef ONLINEJUDGE
    //     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    // #endif
    //
    return 0;
}
