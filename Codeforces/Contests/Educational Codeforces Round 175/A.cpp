/**
*   author:   @fardinkamal62
*   created:  27/02/2025 20:35
**/

#include "iostream"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;

        long long cycles = n / 15;
        int remainder = n % 15;
        long long extra = min(3, remainder + 1);

        cout << cycles * 3 + extra << "\n";
    }
    return 0;
}
