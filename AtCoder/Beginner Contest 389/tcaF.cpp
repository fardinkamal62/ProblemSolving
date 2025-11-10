/**
*   author:   @fardinkamal62
*   created:  25/01/2025 06:39
**/

#include "iostream"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long tt;
    cin >> tt;

    for (int i = 2; i < tt; i++){
        long long f = 1;
        for (int j = 1; j <= i; ++j) {
            f *= j;
        }
        if (f == tt) {
            cout << i << endl;
        }
    }

    return 0;
}
