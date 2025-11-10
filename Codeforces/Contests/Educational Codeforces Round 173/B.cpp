/**
*   author:   @fardinkamal62
*   created:  19/12/24 21:42
*   problem:  https://codeforces.com/contest/2043/problem/B
*   inspiration: https://codeforces.com/contest/2043/submission/298244603
**/

#include "iostream"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        long long n, d;

        cin >> n >> d;
        cout << "1 ";

        if (d % 3 == 0 || n >= 3) cout << "3 ";
        if (d % 5 == 0) cout << "5 ";
        if (d % 7 == 0 || n >= 3) cout << "7 ";
        if (d % 9 == 0 || n >= 6 || (d % 3 == 0 && n >=3)) cout << "9 ";

        cout << "\n";
    }
    return 0;
}
