/**
*   author:   @fardinkamal62
*   created:  15/02/2025 09:17
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

        int start = 0;
        int end = n - 1;

        while (true) {
            char start_c = s[start];
            char end_c = s[end];
            if ((start_c == '0' && end_c == '1') || (start_c == '1' && end_c == '0')) {
                start++;
                end--;
            } else  break;
        }

        if (end - start < 0) cout << 0 << "\n";
        else cout << (end - start) + 1 << "\n";
    }
    return 0;
}
