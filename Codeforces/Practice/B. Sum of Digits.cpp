/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s;
    cin >> s;

    if(s.length() == 1) {
        cout << 0 << endl;
        return 0;
    }

    long long result = 0;
    long long sum = 0;
    for(char c : s) {
        sum += (c - '0');
    }
    result++;

    long long tt = sum;
    while (tt >= 10) {
        long long sum = 0;

        long long temp = tt;
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }

        tt = sum;
        result ++;
    }


    cout << result << endl;

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
