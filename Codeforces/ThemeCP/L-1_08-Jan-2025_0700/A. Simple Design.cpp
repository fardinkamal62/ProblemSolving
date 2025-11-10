/**
*   author:   @fardinkamal62
*   created:  08/01/2025 07:07
**/

#include "iostream"
using namespace std;

int sumOfDigits(int n) {
    if (n == 0)
        return 0;

    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int x, k;
        cin >> x >> k;

        int sum = sumOfDigits(x);

        while (true) {
            if (sum % k == 0) {
                cout << x << "\n";
                break;
            }
            // if (x >= k) {
            //     cout << k << "\n";
            //     break;
            // }
            sum = sumOfDigits(++x);
        }
    }
    return 0;
}
