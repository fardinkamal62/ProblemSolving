/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    int b, g;
    cin >> b >> g;

    if (b > g) cout << "Bat" << endl;
    else cout << "Glove" << endl;

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
