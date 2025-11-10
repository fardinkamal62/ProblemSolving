/**
*   author:   @fardinkamal62
**/

#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

#define endl '\n';


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long tt;
    cin >> tt;

    while (tt--) {
        int n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        int j = 0;
        for (int i = 0; i < n && j < m; i++) {
            if (a[i] == b[j]) {
                j++;
            }
        }

        if (j == m) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
