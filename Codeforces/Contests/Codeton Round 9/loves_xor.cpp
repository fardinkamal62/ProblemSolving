#include <iostream>
#include <vector>
using namespace std;

int main() {
    int tests;
    cin >> tests;

    while (tests--) {
        long long x, m;
        cin >> x >> m;

        int xors = 0;

        for (long long i = 1; i <= m; ++i) {
            long long xorValue = x ^ i;

            if (xorValue >= m || x == i) {
                continue;
            }

            if (x % xorValue == 0 || i % xorValue == 0) {
                xors++;
            }
        }

        cout << xors << endl;
    }

    return 0;
}
