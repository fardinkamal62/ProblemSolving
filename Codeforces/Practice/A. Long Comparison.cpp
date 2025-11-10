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

    while (tt--)
    {
        string x1, x2;
        int p1, p2;
        cin >> x1 >> p1 >> x2 >> p2;

        int len1 = x1.length() + p1;
        int len2 = x2.length() + p2;

        if (len1 != len2) {
            if (len1 > len2) cout << ">" << endl;
            else cout << "<" << endl;
        } else {
            while (x1.length() < x2.length() && p1 > 0) {
                x1 += '0';
                p1--;
            }
            while (x2.length() < x1.length() && p2 > 0) {
                x2 += '0';
                p2--;
            }

            long long num1 = stoll(x1);
            long long num2 = stoll(x2);

            if (num1 > num2) {
                cout << ">" << endl;
            } else if (num1 < num2) {
                cout << "<" << endl;
            } else {
                if (p1 > p2) {
                    cout << ">" << endl;
                } else if (p1 < p2) {
                    cout << "<" << endl;
                } else {
                    cout << "=" << endl;
                }
            }
        }
    }



#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
