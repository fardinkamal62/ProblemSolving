/**
*   author:   @fardinkamal62
*   created:  15/02/2025 08:41
**/

#include "iostream"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    const string pi = "314159265358979323846264338327";
    while (tt--) {
        string n;
        cin >> n;

        int result = 0;
        for (int i = 0; i < n.size(); i++) {
            if (n[i] == pi[i]) result++;
            else break;
        }

        cout << result << "\n";
    }
    return 0;
}
