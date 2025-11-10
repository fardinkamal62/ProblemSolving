/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tt;
    cin >> tt;

    long long result = 0;

    for (int i = 1; i <= tt; i++)
    {
        if (__gcd(i, 10) > 1) result++;
    }
    cout << result << endl;

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
