/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

double calculateSquareArea(int x1, int y1, int x2, int y2) {
    double sideLength = std::max(std::abs(x2 - x1), std::abs(y2 - y1));

    return sideLength * sideLength;
}


int main() {
#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tt;
    cin >> tt;

    while (tt--) {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << calculateSquareArea(x1, y1, x2, y2) << endl;
        cout << calculateSquareArea(x2, y1, x1, y2) << endl;
        cout << calculateSquareArea(x2, y2, x1, y1) << endl;
        cout << calculateSquareArea(x1, y2, x2, y1) << endl;

    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
